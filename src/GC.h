#ifndef _YVM_GC_H
#define _YVM_GC_H

#include <unordered_set>
#include <memory>  
#include <thread>
#include "Option.h"
#include "RuntimeEnv.h"
#include <iostream>

struct JType;

enum class GCPolicy {
    GC_MARK_AND_SWEEP
};
class GC{
public:
    GC(){}

    void gc(GCPolicy policy = GCPolicy::GC_MARK_AND_SWEEP);

private:
    void markAndSweep();
    void mark(JType* ref);
    void sweep() const;
    std::unordered_set<size_t> objectBitmap;
    std::unordered_set<size_t> arrayBitmap;
};

template <class T>
struct HeapAllocator {
    typedef T value_type;
    HeapAllocator() = default;
    template <class U> constexpr HeapAllocator(const HeapAllocator<U>&) noexcept {}
    T* allocate(std::size_t n) {
        if (n > std::size_t(-1) / sizeof(T)) throw std::bad_alloc();
        if (auto p = static_cast<T*>(std::malloc(n * sizeof(T)))) {
            thresholdVal += n * sizeof(T);
            if (thresholdVal >= YVM_GC_THRESHOLD_VALUE) {
                thresholdVal = 0;
#ifdef YVM_DEBUG_SHOW_THREAD_NAME
                std::cout << "[Garbage Collection TThread] ID:"<<std::this_thread::get_id()<<"\n";
#endif
                std::thread gcThread([] {
                    yrt.aliveThreadCounterMutex.lock();
                    yrt.aliveThreadCount++;
                    yrt.aliveThreadCounterMutex.unlock();

                    yrt.gc->gc(GCPolicy::GC_MARK_AND_SWEEP);

                    yrt.aliveThreadCounterMutex.lock();
                    yrt.aliveThreadCount--;
                    yrt.aliveThreadCounterMutex.unlock();
                });
                gcThread.detach();
            }
            return p;
        }
        throw std::bad_alloc();
    }
    void deallocate(T* p, std::size_t val) noexcept { std::free(p); thresholdVal -= val; }
private:
    size_t thresholdVal = 0;
};

#endif