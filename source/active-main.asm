; SPDX-License-Identifier: FSL-1.1-MIT

extern AppContext_handle

section .text

global _start:function
_start:
    mov     rsi,              [rsp]               ; arg_vector.len
    lea     rdi,              [rsp + 8]           ; arg_vector.ptr
    lea     rdx,              [rdi + rsi * 8 + 8] ; env_vector.ptr
    sub     rsp,              96
    mov     [rsp + 64],       rdi
    mov     [rsp + 72],       rsi
    mov     [rsp + 80],       rdx
    mov     rdi,              rsp
    call    AppContext_handle
    add     rsp,              96
    mov     rdi,              rax
    mov     rax,              60
    syscall

global __stack_chk_fail:function
__stack_chk_fail:
    mov     rdi, 10
    mov     rax, 60
    syscall
