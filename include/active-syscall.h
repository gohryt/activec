// SPDX-License-Identifier: FSL-1.1-MIT

#ifndef ACTIVE_SYSCALL_H
#define ACTIVE_SYSCALL_H

#include "active-types.h"

typedef enum : Uint
{
    Syscall_Error_NONE = 0,
    Syscall_Error_PERM = 1,             // Operation not permitted
    Syscall_Error_NOENT = 2,            // No such file or directory
    Syscall_Error_SRCH = 3,             // No such process
    Syscall_Error_INTR = 4,             // Interrupted system call
    Syscall_Error_IO = 5,               // I/O error
    Syscall_Error_NXIO = 6,             // No such device or address
    Syscall_Error_TOOBIG = 7,           // Argument list too long
    Syscall_Error_NOEXEC = 8,           // Exec format error
    Syscall_Error_BADF = 9,             // Bad file number
    Syscall_Error_CHILD = 10,           // No child processes
    Syscall_Error_AGAIN = 11,           // Try again
    Syscall_Error_NOMEM = 12,           // Out of memory
    Syscall_Error_ACCES = 13,           // Permission denied
    Syscall_Error_FAULT = 14,           // Bad address
    Syscall_Error_NOTBLK = 15,          // Block device required
    Syscall_Error_BUSY = 16,            // Device or resource busy
    Syscall_Error_EXIST = 17,           // File exists
    Syscall_Error_XDEV = 18,            // Cross-device link
    Syscall_Error_NODEV = 19,           // No such device
    Syscall_Error_NOTDIR = 20,          // Not a directory
    Syscall_Error_ISDIR = 21,           // Is a directory
    Syscall_Error_INVAL = 22,           // Invalid argument
    Syscall_Error_NFILE = 23,           // File table overflow
    Syscall_Error_MFILE = 24,           // Too many open files
    Syscall_Error_NOTTY = 25,           // Not a typewriter
    Syscall_Error_TXTBSY = 26,          // Text file busy
    Syscall_Error_FBIG = 27,            // File too large
    Syscall_Error_NOSPC = 28,           // No space left on device
    Syscall_Error_SPIPE = 29,           // Illegal seek
    Syscall_Error_ROFS = 30,            // Read-only file system
    Syscall_Error_MLINK = 31,           // Too many links
    Syscall_Error_PIPE = 32,            // Broken pipe
    Syscall_Error_DOM = 33,             // Math argument out of domain
    Syscall_Error_RANGE = 34,           // Math result not representable
    Syscall_Error_DEADLK = 35,          // Resource deadlock would occur
    Syscall_Error_NAMETOOLONG = 36,     // File name too long
    Syscall_Error_NOLCK = 37,           // No record locks available
    Syscall_Error_NOSYS = 38,           // Invalid system call number
    Syscall_Error_NOTEMPTY = 39,        // Directory not empty
    Syscall_Error_LOOP = 40,            // Too many symbolic links encountered
    Syscall_Error_NOMSG = 42,           // No message of desired type
    Syscall_Error_IDRM = 43,            // Identifier removed
    Syscall_Error_CHRNG = 44,           // Channel number out of range
    Syscall_Error_L2NSYNC = 45,         // Level 2 not synchronized
    Syscall_Error_L3HLT = 46,           // Level 3 halted
    Syscall_Error_L3RST = 47,           // Level 3 reset
    Syscall_Error_LNRNG = 48,           // Link number out of range
    Syscall_Error_UNATCH = 49,          // Protocol driver not attached
    Syscall_Error_NOCSI = 50,           // No CSI structure available
    Syscall_Error_L2HLT = 51,           // Level 2 halted
    Syscall_Error_BADE = 52,            // Invalid exchange
    Syscall_Error_BADR = 53,            // Invalid request descriptor
    Syscall_Error_XFULL = 54,           // Exchange full
    Syscall_Error_NOANO = 55,           // No anode
    Syscall_Error_BADRQC = 56,          // Invalid request code
    Syscall_Error_BADSLT = 57,          // Invalid slot
    Syscall_Error_BFONT = 59,           // Bad font file format
    Syscall_Error_NOSTR = 60,           // Device not a stream
    Syscall_Error_NODATA = 61,          // No data available
    Syscall_Error_TIME = 62,            // Timer expired
    Syscall_Error_NOSR = 63,            // Out of streams resources
    Syscall_Error_NONET = 64,           // Machine is not on the network
    Syscall_Error_NOPKG = 65,           // Package not installed
    Syscall_Error_REMOTE = 66,          // Object is remote
    Syscall_Error_OLINK = 67,           // Link has been severed
    Syscall_Error_ADV = 68,             // Advertise error
    Syscall_Error_SRMNT = 69,           // Srmount error
    Syscall_Error_COMM = 70,            // Communication error on send
    Syscall_Error_PROTO = 71,           // Protocol error
    Syscall_Error_MULTIHOP = 72,        // Multihop attempted
    Syscall_Error_DOTDOT = 73,          // RFS specific error
    Syscall_Error_BADMSG = 74,          // Not a data message
    Syscall_Error_OVERFLOW = 75,        // Value too large for defined data type
    Syscall_Error_NOTUNIQ = 76,         // Name not unique on network
    Syscall_Error_BADFD = 77,           // File descriptor in bad state
    Syscall_Error_REMCHG = 78,          // Remote address changed
    Syscall_Error_LIBACC = 79,          // Can not access needed shared library
    Syscall_Error_LIBBAD = 80,          // Accessing a corrupted shared library
    Syscall_Error_LIBSCN = 81,          // .lib section in a.out corrupted
    Syscall_Error_LIBMAX = 82,          // Too many shared libraries
    Syscall_Error_LIBEXEC = 83,         // Cannot exec a shared library
    Syscall_Error_ILSEQ = 84,           // Illegal byte sequence
    Syscall_Error_RESTART = 85,         // Restart interrupted syscall
    Syscall_Error_STRPIPE = 86,         // Streams pipe error
    Syscall_Error_USERS = 87,           // Too many users
    Syscall_Error_NOTSOCK = 88,         // Socket operation on non-socket
    Syscall_Error_DESTADDRREQ = 89,     // Destination address required
    Syscall_Error_MSGSIZE = 90,         // Message too long
    Syscall_Error_PROTOTYPE = 91,       // Protocol wrong type for socket
    Syscall_Error_NOPROTOOPT = 92,      // Protocol not available
    Syscall_Error_PROTONOSUPPORT = 93,  // Protocol not supported
    Syscall_Error_SOCKTNOSUPPORT = 94,  // Socket type not supported
    Syscall_Error_OPNOTSUPP = 95,       // Operation not supported on endpoint
    Syscall_Error_PFNOSUPPORT = 96,     // Protocol family not supported
    Syscall_Error_AFNOSUPPORT = 97,     // Address family not supported
    Syscall_Error_ADDRINUSE = 98,       // Address already in use
    Syscall_Error_ADDRNOTAVAIL = 99,    // Cannot assign requested address
    Syscall_Error_NETDOWN = 100,        // Network is down
    Syscall_Error_NETUNREACH = 101,     // Network is unreachable
    Syscall_Error_NETRESET = 102,       // Network dropped connection reset
    Syscall_Error_CONNABORTED = 103,    // Software caused connection abort
    Syscall_Error_CONNRESET = 104,      // Connection reset by peer
    Syscall_Error_NOBUFS = 105,         // No buffer space available
    Syscall_Error_ISCONN = 106,         // Transport endpoint already connected
    Syscall_Error_NOTCONN = 107,        // Transport endpoint not connected
    Syscall_Error_SHUTDOWN = 108,       // Cannot send after shutdown
    Syscall_Error_TOOMANYREFS = 109,    // Too many references to splice
    Syscall_Error_TIMEDOUT = 110,       // Connection timed out
    Syscall_Error_CONNREFUSED = 111,    // Connection refused
    Syscall_Error_HOSTDOWN = 112,       // Host is down
    Syscall_Error_HOSTUNREACH = 113,    // No route to host
    Syscall_Error_ALREADY = 114,        // Operation already in progress
    Syscall_Error_INPROGRESS = 115,     // Operation now in progress
    Syscall_Error_STALE = 116,          // Stale file handle
    Syscall_Error_UCLEAN = 117,         // Structure needs cleaning
    Syscall_Error_NOTNAM = 118,         // Not a XENIX named type file
    Syscall_Error_NAVAIL = 119,         // No XENIX semaphores available
    Syscall_Error_ISNAM = 120,          // Is a named type file
    Syscall_Error_REMOTEIO = 121,       // Remote I/O error
    Syscall_Error_DQUOT = 122,          // Quota exceeded
    Syscall_Error_NOMEDIUM = 123,       // No medium found
    Syscall_Error_MEDIUMTYPE = 124,     // Wrong medium type
    Syscall_Error_CANCELED = 125,       // Operation Canceled
    Syscall_Error_NOKEY = 126,          // Required key not available
    Syscall_Error_KEYEXPIRED = 127,     // Key has expired
    Syscall_Error_KEYREVOKED = 128,     // Key has been revoked
    Syscall_Error_KEYREJECTED = 129,    // Key was rejected by service
    Syscall_Error_OWNERDEAD = 130,      // Owner died
    Syscall_Error_NOTRECOVERABLE = 131, // State not recoverable
    Syscall_Error_RFKILL = 132,         // Operation not possible due to RF-kill
    Syscall_Error_HWPOISON = 133        // Memory page has hardware error
} Syscall_Error;

String Syscall_Error_STRING_TABLE[134] = {
    [1] = String_from("operation not permitted"),
    [2] = String_from("no such file or directory"),
    [3] = String_from("no such process"),
    [4] = String_from("interrupted system call"),
    [5] = String_from("I/O error"),
    [6] = String_from("no such device or address"),
    [7] = String_from("argument list too long"),
    [8] = String_from("exec format error"),
    [9] = String_from("bad file number"),
    [10] = String_from("no child processes"),
    [11] = String_from("try again"),
    [12] = String_from("out of memory"),
    [13] = String_from("permission denied"),
    [14] = String_from("bad address"),
    [15] = String_from("block device required"),
    [16] = String_from("device or resource busy"),
    [17] = String_from("file exists"),
    [18] = String_from("cross-device link"),
    [19] = String_from("no such device"),
    [20] = String_from("not a directory"),
    [21] = String_from("is a directory"),
    [22] = String_from("invalid argument"),
    [23] = String_from("file table overflow"),
    [24] = String_from("too many open files"),
    [25] = String_from("not a typewriter"),
    [26] = String_from("text file busy"),
    [27] = String_from("file too large"),
    [28] = String_from("no space left on device"),
    [29] = String_from("illegal seek"),
    [30] = String_from("read-only file system"),
    [31] = String_from("too many links"),
    [32] = String_from("broken pipe"),
    [33] = String_from("math argument out of domain"),
    [34] = String_from("math result not representable"),
    [35] = String_from("resource deadlock would occur"),
    [36] = String_from("file name too long"),
    [37] = String_from("no record locks available"),
    [38] = String_from("invalid system call number"),
    [39] = String_from("directory not empty"),
    [40] = String_from("too many symbolic links encountered"),
    [42] = String_from("no message of desired type"),
    [43] = String_from("identifier removed"),
    [44] = String_from("channel number out of range"),
    [45] = String_from("level 2 not synchronized"),
    [46] = String_from("level 3 halted"),
    [47] = String_from("level 3 reset"),
    [48] = String_from("link number out of range"),
    [49] = String_from("protocol driver not attached"),
    [50] = String_from("no CSI structure available"),
    [51] = String_from("level 2 halted"),
    [52] = String_from("invalid exchange"),
    [53] = String_from("invalid request descriptor"),
    [54] = String_from("exchange full"),
    [55] = String_from("no anode"),
    [56] = String_from("invalid request code"),
    [57] = String_from("invalid slot"),
    [59] = String_from("bad font file format"),
    [60] = String_from("device not a stream"),
    [61] = String_from("no data available"),
    [62] = String_from("timer expired"),
    [63] = String_from("out of streams resources"),
    [64] = String_from("machine is not on the network"),
    [65] = String_from("package not installed"),
    [66] = String_from("object is remote"),
    [67] = String_from("link has been severed"),
    [68] = String_from("advertise error"),
    [69] = String_from("srmount error"),
    [70] = String_from("communication error on send"),
    [71] = String_from("protocol error"),
    [72] = String_from("multihop attempted"),
    [73] = String_from("RFS specific error"),
    [74] = String_from("not a data message"),
    [75] = String_from("value too large for defined data type"),
    [76] = String_from("name not unique on network"),
    [77] = String_from("file descriptor in bad state"),
    [78] = String_from("remote address changed"),
    [79] = String_from("cannot access needed shared library"),
    [80] = String_from("accessing a corrupted shared library"),
    [81] = String_from("'.lib' section in a.out corrupted"),
    [82] = String_from("too many shared libraries"),
    [83] = String_from("cannot exec a shared library"),
    [84] = String_from("illegal byte sequence"),
    [85] = String_from("restart interrupted syscall"),
    [86] = String_from("streams pipe error"),
    [87] = String_from("too many users"),
    [88] = String_from("socket operation on non-socket"),
    [89] = String_from("destination address required"),
    [90] = String_from("message too long"),
    [91] = String_from("protocol wrong type for socket"),
    [92] = String_from("protocol not available"),
    [93] = String_from("protocol not supported"),
    [94] = String_from("socket type not supported"),
    [95] = String_from("operation not supported on endpoint"),
    [96] = String_from("protocol family not supported"),
    [97] = String_from("address family not supported"),
    [98] = String_from("address already in use"),
    [99] = String_from("cannot assign requested address"),
    [100] = String_from("network is down"),
    [101] = String_from("network is unreachable"),
    [102] = String_from("network dropped connection reset"),
    [103] = String_from("software caused connection abort"),
    [104] = String_from("connection reset by peer"),
    [105] = String_from("no buffer space available"),
    [106] = String_from("transport endpoint already connected"),
    [107] = String_from("transport endpoint not connected"),
    [108] = String_from("cannot send after shutdown"),
    [109] = String_from("too many references to splice"),
    [110] = String_from("connection timed out"),
    [111] = String_from("connection refused"),
    [112] = String_from("host is down"),
    [113] = String_from("no route to host"),
    [114] = String_from("operation already in progress"),
    [115] = String_from("operation now in progress"),
    [116] = String_from("stale file handle"),
    [117] = String_from("structure needs cleaning"),
    [118] = String_from("not a XENIX named type file"),
    [119] = String_from("no XENIX semaphores available"),
    [120] = String_from("is a named type file"),
    [121] = String_from("remote I/O error"),
    [122] = String_from("quota exceeded"),
    [123] = String_from("no medium found"),
    [124] = String_from("wrong medium type"),
    [125] = String_from("operation canceled"),
    [126] = String_from("required key not available"),
    [127] = String_from("key has expired"),
    [128] = String_from("key has been revoked"),
    [129] = String_from("key was rejected by service"),
    [130] = String_from("owner died"),
    [131] = String_from("state not recoverable"),
    [132] = String_from("operation not possible due to RF-kill"),
    [133] = String_from("memory page has hardware error"),
};

#define Syscall_Result(T)                                                                                              \
    typedef struct                                                                                                     \
    {                                                                                                                  \
        T result;                                                                                                      \
        Syscall_Error error;                                                                                           \
    } Syscall_Result##T;

Uint Syscall_Result_MAX_UINT = ((Uint) ~(Uint)0) - 4095;

Syscall_Result(S32);
Syscall_Result(Uint);

typedef enum : U8
{
    Syscall_File_Flags_AccessMode_R = 0,
    Syscall_File_Flags_AccessMode_W = 1,
    Syscall_File_Flags_AccessMode_RW = 2,
} Syscall_File_Flags_AccessMode;

typedef struct [[gnu::packed]]
{
    Syscall_File_Flags_AccessMode access_mode : 2;
    U8 _2 : 4;
    bool create : 1;
    bool exclusive : 1;
    bool no_controlling_tty : 1;
    bool truncate : 1;
    bool append : 1;
    bool nonblock : 1;
    bool dsynchronous : 1;
    bool asynchronous : 1;
    bool direct : 1;
    U8 _15 : 1;
    bool directory : 1;
    bool no_follow : 1;
    bool no_atime : 1;
    bool close_on_exec : 1;
    bool sync : 1;
    bool path : 1;
    bool tmp_file : 1;
    U16 _23 : 9;
} Syscall_File_Flags;

typedef enum : U8
{
    Syscall_Mode_Permissions_NONE = 0x0,
    Syscall_Mode_Permissions_X = 0x1,
    Syscall_Mode_Permissions_W = 0x2,
    Syscall_Mode_Permissions_WX = 0x3,
    Syscall_Mode_Permissions_R = 0x4,
    Syscall_Mode_Permissions_RX = 0x5,
    Syscall_Mode_Permissions_RW = 0x6,
    Syscall_Mode_Permissions_RWX = 0x7,
} Syscall_Mode_Permissions;

typedef struct [[gnu::packed]]
{
    Syscall_Mode_Permissions others : 4;
    Syscall_Mode_Permissions group : 4;
    Syscall_Mode_Permissions owner : 4;
    bool sticky : 1;
    bool set_gid : 1;
    bool set_uid : 1;
    U32 _15 : 17;
} Syscall_Mode;

extern S32 Syscall_openatRaw(S32 directory_FD, StringSentinel path, Syscall_File_Flags flags, Syscall_Mode mode);

[[clang::always_inline]] inline Syscall_ResultS32 Syscall_openat(S32 directory_FD, StringSentinel path,
                                                                 Syscall_File_Flags flags, Syscall_Mode mode)
{
    S32 raw = Syscall_openatRaw(directory_FD, path, flags, mode);
    return raw < 0 ? (Syscall_ResultS32){.result = 0, .error = (Uint)0 - raw}
                   : (Syscall_ResultS32){.result = raw, .error = 0};
}

extern Uint Syscall_closeRaw(S32 FD);

[[clang::always_inline]] inline Syscall_Error Syscall_close(S32 FD)
{
    Uint raw = Syscall_closeRaw(FD);
    return raw > Syscall_Result_MAX_UINT ? (Uint)0 - raw : 0;
}

typedef struct [[gnu::packed]]
{
    U8 _0 : 8;
    bool symlink_nofollow : 1;
    bool removedir : 1;
    bool symlink_follow : 1;
    bool no_automount : 1;
    bool empty_path : 1;
    bool force_sync : 1;
    bool dont_sync : 1;
    U32 _15 : 17;
} Syscall_At;

typedef struct
{
    S64 second;
    U32 nanosecond;
    U32 _12;
} Syscall_Statx_Timestamp;

typedef struct [[gnu::packed]]
{
    bool type : 1;
    bool mode : 1;
    bool nlink : 1;
    bool UID : 1;
    bool GID : 1;
    bool atime : 1;
    bool mtime : 1;
    bool ctime : 1;
    bool ino : 1;
    bool size : 1;
    bool blocks : 1;
    bool btime : 1;
    bool mount_ID : 1;
    bool dioalign : 1;
    bool mount_ID_unique : 1;
    bool subvolume : 1;
    U16 _16 : 16;
} Syscall_Statx_Mask;

typedef struct
{
    Syscall_Statx_Mask mask;
    U32 blksize;
    U64 attributes;
    U32 nlink;
    U32 uid;
    U32 gid;
    U16 mode;
    U16 _30[1];
    U64 ino;
    U64 size;
    U64 blocks;
    U64 attributes_mask;
    Syscall_Statx_Timestamp atime;
    Syscall_Statx_Timestamp btime;
    Syscall_Statx_Timestamp ctime;
    Syscall_Statx_Timestamp mtime;
    U32 rdev_major;
    U32 rdev_minor;
    U32 dev_major;
    U32 dev_minor;
    U64 _144[14];
} Syscall_Statx;

extern Uint Syscall_statxRaw(S32 directory_FD, StringSentinel path, Syscall_At flags, Syscall_Statx_Mask mask,
                             Syscall_Statx *statx_ptr);

[[clang::always_inline]] inline Syscall_Error Syscall_statx(S32 directory_FD, StringSentinel path, Syscall_At flags,
                                                            Syscall_Statx_Mask mask, Syscall_Statx *statx_ptr)
{
    Uint raw = Syscall_statxRaw(directory_FD, path, flags, mask, statx_ptr);
    return raw > Syscall_Result_MAX_UINT ? (Uint)0 - raw : 0;
}

extern Uint Syscall_readRaw(S32 FD, U8 *ptr, Uint len);

[[clang::always_inline]] inline Syscall_ResultUint Syscall_read(S32 FD, U8 *ptr, Uint len)
{
    Uint raw = Syscall_readRaw(FD, ptr, len);
    return raw > Syscall_Result_MAX_UINT ? (Syscall_ResultUint){.result = 0, .error = (Uint)0 - raw}
                                         : (Syscall_ResultUint){.result = raw, .error = 0};
}

extern Uint Syscall_writeRaw(S32 FD, U8 *ptr, Uint len);

[[clang::always_inline]] inline Syscall_ResultUint Syscall_write(S32 FD, U8 *ptr, Uint len)
{
    Uint raw = Syscall_writeRaw(FD, ptr, len);
    return raw > Syscall_Result_MAX_UINT ? (Syscall_ResultUint){.result = 0, .error = (Uint)0 - raw}
                                         : (Syscall_ResultUint){.result = raw, .error = 0};
}

[[noreturn]] extern void Syscall_exitRaw(S32 code);

[[noreturn]] [[clang::always_inline]] inline void Syscall_exit(S32 code)
{
    Syscall_exitRaw(code);
}

#endif // ACTIVE_SYSCALL_H
