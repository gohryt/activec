; SPDX-License-Identifier: FSL-1.1-MIT

section .text

global Syscall_openatRaw:function
Syscall_openatRaw:
    mov     rax, 257
    mov     r10, rcx
    syscall
    ret

global Syscall_closeRaw:function
Syscall_closeRaw:
    mov     rax, 3
    syscall
    ret

global Syscall_statxRaw:function
Syscall_statxRaw:
    mov     rax, 332
    mov     r10, rcx
    syscall
    ret

global Syscall_readRaw:function
Syscall_readRaw:
    mov     rax, 0
    syscall
    ret

global Syscall_writeRaw:function
Syscall_writeRaw:
    mov     rax, 1
    syscall
    ret

global Syscall_exitRaw:function
Syscall_exitRaw:
    mov     rax, 60
    syscall
    ret
