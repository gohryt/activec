// SPDX-License-Identifier: FSL-1.1-MIT

#include "active-syscall.h"
#include "active-types.h"
#include "active.h"

Uint uint_to_buf(U8 *ptr, Uint len, U64 value)
{
    Uint ic = 0;
    U64 iv = value;

    for (; ic < len && iv > 0;)
    {
        ic += 1;
        iv /= 10;
    }

    Uint jc = ic - 1;
    U64 jv = value;

    for (; jc >= 0 && jv > 0;)
    {
        ptr[jc] = (jv % 10) + '0';

        jc -= 1;
        jv /= 10;
    }

    return ic;
}

S32 AppContext_handle(AppContext *context)
{
    Syscall_Statx statx;
    Syscall_Error error = Syscall_statx(-100, (StringSentinel) "cat",
                                        (Syscall_At){
                                            ._0 = 0,
                                            .symlink_nofollow = false,
                                            .removedir = false,
                                            .symlink_follow = false,
                                            .no_automount = false,
                                            .empty_path = false,
                                            .force_sync = false,
                                            .dont_sync = false,
                                            ._15 = 0,
                                        },
                                        (Syscall_Statx_Mask){
                                            .type = false,
                                            .mode = false,
                                            .nlink = false,
                                            .UID = false,
                                            .GID = false,
                                            .atime = false,
                                            .mtime = false,
                                            .ctime = false,
                                            .ino = false,
                                            .size = true,
                                            .blocks = false,
                                            .btime = false,
                                            .mount_ID = false,
                                            .dioalign = false,
                                            .mount_ID_unique = false,
                                            .subvolume = false,
                                            ._16 = 0,
                                        },
                                        &statx);

    if (error)
    {
        String error_string = Syscall_Error_STRING_TABLE[error];
        Syscall_write(1, error_string.ptr, error_string.len);
    }

    U8 buffer[128];

    Uint i = uint_to_buf(buffer, 128, statx.size);

    Syscall_write(1, buffer, i);

    return sizeof(Syscall_File_Flags);
}

typedef struct
{
    Context context;
    StringSentinel path;
} CatContext;

void CatContext_handle(CatContext *context)
{
}
