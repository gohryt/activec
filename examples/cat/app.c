// SPDX-License-Identifier: FSL-1.1-MIT

#include "active-types.h"
#include "active.h"

int AppContext_handle(AppContext *context)
{
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
