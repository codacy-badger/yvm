#ifndef YVM_OPCODE_H
#define YVM_OPCODE_H

#define T_BOOLEAN 4
#define T_CHAR 5
#define T_FLOAT 6
#define T_DOUBLE 7
#define T_BYTE 8
#define T_SHORT 9
#define T_INT 10
#define T_LONG 11

#define T_EXTRA_VOID 12
#define T_EXTRA_ARRAY 13
#define T_EXTRA_OBJECT 14

#define op_nop 0
#define op_aconst_null 1
#define op_iconst_m1 2
#define op_iconst_0 3
#define op_iconst_1 4
#define op_iconst_2 5
#define op_iconst_3 6
#define op_iconst_4 7
#define op_iconst_5 8
#define op_lconst_0 9
#define op_lconst_1 10
#define op_fconst_0 11
#define op_fconst_1 12
#define op_fconst_2 13
#define op_dconst_0 14
#define op_dconst_1 15
#define op_bipush 16
#define op_sipush 17
#define op_ldc 18
#define op_ldc_w 19
#define op_ldc2_w 20
#define op_iload 21
#define op_lload 22
#define op_fload 23
#define op_dload 24
#define op_aload 25
#define op_iload_0 26
#define op_iload_1 27
#define op_iload_2 28
#define op_iload_3 29
#define op_lload_0 30
#define op_lload_1 31
#define op_lload_2 32
#define op_lload_3 33
#define op_fload_0 34
#define op_fload_1 35
#define op_fload_2 36
#define op_fload_3 37
#define op_dload_0 38
#define op_dload_1 39
#define op_dload_2 40
#define op_dload_3 41
#define op_aload_0 42
#define op_aload_1 43
#define op_aload_2 44
#define op_aload_3 45
#define op_iaload 46
#define op_laload 47
#define op_faload 48
#define op_daload 49
#define op_aaload 50
#define op_baload 51
#define op_caload 52
#define op_saload 53
#define op_istore 54
#define op_lstore 55
#define op_fstore 56
#define op_dstore 57
#define op_astore 58
#define op_istore_0 59
#define op_istore_1 60
#define op_istore_2 61
#define op_istore_3 62
#define op_lstore_0 63
#define op_lstore_1 64
#define op_lstore_2 65
#define op_lstore_3 66
#define op_fstore_0 67
#define op_fstore_1 68
#define op_fstore_2 69
#define op_fstore_3 70
#define op_dstore_0 71
#define op_dstore_1 72
#define op_dstore_2 73
#define op_dstore_3 74
#define op_astore_0 75
#define op_astore_1 76
#define op_astore_2 77
#define op_astore_3 78
#define op_iastore 79
#define op_lastore 80
#define op_fastore 81
#define op_dastore 82
#define op_aastore 83
#define op_bastore 84
#define op_castore 85
#define op_sastore 86
#define op_pop 87
#define op_pop2 88
#define op_dup 89
#define op_dup_x1 90
#define op_dup_x2 91
#define op_dup2 92
#define op_dup2_x1 93
#define op_dup2_x2 94
#define op_swap 95
#define op_iadd 96
#define op_ladd 97
#define op_fadd 98
#define op_dadd 99
#define op_isub 100
#define op_lsub 101
#define op_fsub 102
#define op_dsub 103
#define op_imul 104
#define op_lmul 105
#define op_fmul 106
#define op_dmul 107
#define op_idiv 108
#define op_ldiv 109
#define op_fdiv 110
#define op_ddiv 111
#define op_irem 112
#define op_lrem 113
#define op_frem 114
#define op_drem 115
#define op_ineg 116
#define op_lneg 117
#define op_fneg 118
#define op_dneg 119
#define op_ishl 120
#define op_lshl 121
#define op_ishr 122
#define op_lshr 123
#define op_iushr 124
#define op_lushr 125
#define op_iand 126
#define op_land 127
#define op_ior 128
#define op_lor 129
#define op_ixor 130
#define op_lxor 131
#define op_iinc 132
#define op_i2l 133
#define op_i2f 134
#define op_i2d 135
#define op_l2i 136
#define op_l2f 137
#define op_l2d 138
#define op_f2i 139
#define op_f2l 140
#define op_f2d 141
#define op_d2i 142
#define op_d2l 143
#define op_d2f 144
#define op_i2b 145
#define op_i2c 146
#define op_i2s 147
#define op_lcmp 148
#define op_fcmpl 149
#define op_fcmpg 150
#define op_dcmpl 151
#define op_dcmpg 152
#define op_ifeq 153
#define op_ifne 154
#define op_iflt 155
#define op_ifge 156
#define op_ifgt 157
#define op_ifle 158
#define op_if_icmpeq 159
#define op_if_icmpne 160
#define op_if_icmplt 161
#define op_if_icmpge 162
#define op_if_icmpgt 163
#define op_if_icmple 164
#define op_if_acmpeq 165
#define op_if_acmpne 166
#define op_goto 167
#define op_jsr 168
#define op_ret 169
#define op_tableswitch 170
#define op_lookupswitch 171
#define op_ireturn 172
#define op_lreturn 173
#define op_freturn 174
#define op_dreturn 175
#define op_areturn 176
#define op_return 177
#define op_getstatic 178
#define op_putstatic 179
#define op_getfield 180
#define op_putfield 181
#define op_invokevirtual 182
#define op_invokespecial 183
#define op_invokestatic 184
#define op_invokeinterface 185
#define op_invokedynamic 186
#define op_new 187
#define op_newarray 188
#define op_anewarray 189
#define op_arraylength 190
#define op_athrow 191
#define op_checkcast 192
#define op_instanceof 193
#define op_monitorenter 194
#define op_monitorexit 195
#define op_wide 196
#define op_multianewarray 197
#define op_ifnull 198
#define op_ifnonnull 199
#define op_goto_w 200
#define op_jsr_w 201
#define op_breakpoint 202
#define op_impdep1 254
#define op_impdep2 255

#endif // !YVM_OPCODE_H
