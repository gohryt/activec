// SPDX-License-Identifier: FSL-1.1-MIT

#include "active-syscall.h"
#include "active-types.h"
#include "active.h"

int AppContext_handle(AppContext *context)
{
    String error_string = Syscall_Error_STRING_TABLE[AGAIN];
    Syscall_write(1, error_string.ptr, error_string.len);
    return context->arg_vector.len;
}

typedef struct
{
    Context context;
    StringSentinel path;
} CatContext;

void CatContext_handle(CatContext *context)
{
}
