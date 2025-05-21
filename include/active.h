// SPDX-License-Identifier: FSL-1.1-MIT

#ifndef ACTIVE_H
#define ACTIVE_H

#include "active-context.h"
#include "active-types.h"

VectorOf(StringSentinel);

typedef struct
{
    Context context;
    VectorOfStringSentinel arg_vector;
} AppContext;

int AppContext_handle(AppContext *context);

#endif // ACTIVE_H
