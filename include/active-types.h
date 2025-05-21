// SPDX-License-Identifier: FSL-1.1-MIT

#ifndef ACTIVE_TYPES_H
#define ACTIVE_TYPES_H

typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned long U32;
typedef unsigned long int U64;

typedef char S8;
typedef short S16;
typedef int S32;
typedef long int S64;

#if defined __x86_64__
typedef U64 Uint;
typedef S64 Sint;
typedef U64 Uptr;
typedef S64 Sptr;
#else
typedef U32 Uint;
typedef S32 Sint;
typedef U32 Uptr;
typedef S32 Sptr;
#endif

typedef U8 *StringSentinel;

typedef struct
{
    Uptr ptr;
    Uint len;
} Vector;

void Vector_create(Vector *vector_ptr, Uint len);

#define VectorOf(T)                                                                                                    \
    typedef struct                                                                                                     \
    {                                                                                                                  \
        T *ptr;                                                                                                        \
        Uint len;                                                                                                      \
    } VectorOf##T;                                                                                                     \
    [[clang::always_inline]] inline VectorOf##T VectorOf##T##_create(Uint len)                                         \
    {                                                                                                                  \
        VectorOf##T vector;                                                                                            \
        Vector_create((Vector *)(&vector), sizeof(T) * len);                                                           \
        return vector;                                                                                                 \
    }

typedef struct
{
    U8 *ptr;
    Uint len;
} String;

#define String_from(from) {.ptr = (U8 *)from, .len = sizeof(from) - 1}

#endif // ACTIVE_TYPES_H
