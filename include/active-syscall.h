// SPDX-License-Identifier: FSL-1.1-MIT

#ifndef ACTIVE_SYSCALL_H
#define ACTIVE_SYSCALL_H

#include "active-types.h"

typedef enum : Uint
{
    NONE = 0,
    PERM = 1,             // Operation not permitted
    NOENT = 2,            // No such file or directory
    SRCH = 3,             // No such process
    INTR = 4,             // Interrupted system call
    IO = 5,               // I/O error
    NXIO = 6,             // No such device or address
    TOOBIG = 7,           // Argument list too long
    NOEXEC = 8,           // Exec format error
    BADF = 9,             // Bad file number
    CHILD = 10,           // No child processes
    AGAIN = 11,           // Try again
    NOMEM = 12,           // Out of memory
    ACCES = 13,           // Permission denied
    FAULT = 14,           // Bad address
    NOTBLK = 15,          // Block device required
    BUSY = 16,            // Device or resource busy
    EXIST = 17,           // File exists
    XDEV = 18,            // Cross-device link
    NODEV = 19,           // No such device
    NOTDIR = 20,          // Not a directory
    ISDIR = 21,           // Is a directory
    INVAL = 22,           // Invalid argument
    NFILE = 23,           // File table overflow
    MFILE = 24,           // Too many open files
    NOTTY = 25,           // Not a typewriter
    TXTBSY = 26,          // Text file busy
    FBIG = 27,            // File too large
    NOSPC = 28,           // No space left on device
    SPIPE = 29,           // Illegal seek
    ROFS = 30,            // Read-only file system
    MLINK = 31,           // Too many links
    PIPE = 32,            // Broken pipe
    DOM = 33,             // Math argument out of domain
    RANGE = 34,           // Math result not representable
    DEADLK = 35,          // Resource deadlock would occur
    NAMETOOLONG = 36,     // File name too long
    NOLCK = 37,           // No record locks available
    NOSYS = 38,           // Invalid system call number
    NOTEMPTY = 39,        // Directory not empty
    LOOP = 40,            // Too many symbolic links encountered
    NOMSG = 42,           // No message of desired type
    IDRM = 43,            // Identifier removed
    CHRNG = 44,           // Channel number out of range
    L2NSYNC = 45,         // Level 2 not synchronized
    L3HLT = 46,           // Level 3 halted
    L3RST = 47,           // Level 3 reset
    LNRNG = 48,           // Link number out of range
    UNATCH = 49,          // Protocol driver not attached
    NOCSI = 50,           // No CSI structure available
    L2HLT = 51,           // Level 2 halted
    BADE = 52,            // Invalid exchange
    BADR = 53,            // Invalid request descriptor
    XFULL = 54,           // Exchange full
    NOANO = 55,           // No anode
    BADRQC = 56,          // Invalid request code
    BADSLT = 57,          // Invalid slot
    BFONT = 59,           // Bad font file format
    NOSTR = 60,           // Device not a stream
    NODATA = 61,          // No data available
    TIME = 62,            // Timer expired
    NOSR = 63,            // Out of streams resources
    NONET = 64,           // Machine is not on the network
    NOPKG = 65,           // Package not installed
    REMOTE = 66,          // Object is remote
    NOLINK = 67,          // Link has been severed
    ADV = 68,             // Advertise error
    SRMNT = 69,           // Srmount error
    COMM = 70,            // Communication error on send
    PROTO = 71,           // Protocol error
    MULTIHOP = 72,        // Multihop attempted
    DOTDOT = 73,          // RFS specific error
    BADMSG = 74,          // Not a data message
    OVERFLOW = 75,        // Value too large for defined data type
    NOTUNIQ = 76,         // Name not unique on network
    BADFD = 77,           // File descriptor in bad state
    REMCHG = 78,          // Remote address changed
    LIBACC = 79,          // Can not access needed shared library
    LIBBAD = 80,          // Accessing a corrupted shared library
    LIBSCN = 81,          // .lib section in a.out corrupted
    LIBMAX = 82,          // Too many shared libraries
    LIBEXEC = 83,         // Cannot exec a shared library
    ILSEQ = 84,           // Illegal byte sequence
    RESTART = 85,         // Restart interrupted syscall
    STRPIPE = 86,         // Streams pipe error
    USERS = 87,           // Too many users
    NOTSOCK = 88,         // Socket operation on non-socket
    DESTADDRREQ = 89,     // Destination address required
    MSGSIZE = 90,         // Message too long
    PROTOTYPE = 91,       // Protocol wrong type for socket
    NOPROTOOPT = 92,      // Protocol not available
    PROTONOSUPPORT = 93,  // Protocol not supported
    SOCKTNOSUPPORT = 94,  // Socket type not supported
    OPNOTSUPP = 95,       // Operation not supported on endpoint
    PFNOSUPPORT = 96,     // Protocol family not supported
    AFNOSUPPORT = 97,     // Address family not supported
    ADDRINUSE = 98,       // Address already in use
    ADDRNOTAVAIL = 99,    // Cannot assign requested address
    NETDOWN = 100,        // Network is down
    NETUNREACH = 101,     // Network is unreachable
    NETRESET = 102,       // Network dropped connection reset
    CONNABORTED = 103,    // Software caused connection abort
    CONNRESET = 104,      // Connection reset by peer
    NOBUFS = 105,         // No buffer space available
    ISCONN = 106,         // Transport endpoint already connected
    NOTCONN = 107,        // Transport endpoint not connected
    SHUTDOWN = 108,       // Cannot send after shutdown
    TOOMANYREFS = 109,    // Too many references to splice
    TIMEDOUT = 110,       // Connection timed out
    CONNREFUSED = 111,    // Connection refused
    HOSTDOWN = 112,       // Host is down
    HOSTUNREACH = 113,    // No route to host
    ALREADY = 114,        // Operation already in progress
    INPROGRESS = 115,     // Operation now in progress
    STALE = 116,          // Stale file handle
    UCLEAN = 117,         // Structure needs cleaning
    NOTNAM = 118,         // Not a XENIX named type file
    NAVAIL = 119,         // No XENIX semaphores available
    ISNAM = 120,          // Is a named type file
    REMOTEIO = 121,       // Remote I/O error
    DQUOT = 122,          // Quota exceeded
    NOMEDIUM = 123,       // No medium found
    MEDIUMTYPE = 124,     // Wrong medium type
    CANCELED = 125,       // Operation Canceled
    NOKEY = 126,          // Required key not available
    KEYEXPIRED = 127,     // Key has expired
    KEYREVOKED = 128,     // Key has been revoked
    KEYREJECTED = 129,    // Key was rejected by service
    OWNERDEAD = 130,      // Owner died
    NOTRECOVERABLE = 131, // State not recoverable
    RFKILL = 132,         // Operation not possible due to RF-kill
    HWPOISON = 133        // Memory page has hardware error
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

Uint SYSCALL_RESULT_MAX = ((Uint) ~(Uint)0) - 4095;

Syscall_Result(Uint);

extern Uint Syscall_readRaw(S32 FD, U8 *ptr, Uint len);

[[clang::always_inline]] inline Syscall_ResultUint Syscall_read(S32 FD, U8 *ptr, Uint len)
{
    Uint raw = Syscall_readRaw(FD, ptr, len);

    Syscall_ResultUint result;
    if (raw > SYSCALL_RESULT_MAX)
    {
        result = (Syscall_ResultUint){.result = 0, .error = (Uint)0 - raw};
    }
    else
    {
        result = (Syscall_ResultUint){.result = raw, .error = 0};
    }

    return result;
}

extern Uint Syscall_writeRaw(S32 FD, U8 *ptr, Uint len);

[[clang::always_inline]] inline Syscall_ResultUint Syscall_write(S32 FD, U8 *ptr, Uint len)
{
    Uint raw = Syscall_writeRaw(FD, ptr, len);

    Syscall_ResultUint result;
    if (raw > SYSCALL_RESULT_MAX)
    {
        result = (Syscall_ResultUint){.result = 0, .error = (Uint)0 - raw};
    }
    else
    {
        result = (Syscall_ResultUint){.result = raw, .error = 0};
    }

    return result;
}

[[noreturn]] extern void Syscall_exitRaw(S32 code);

[[clang::always_inline]] [[noreturn]] inline void Syscall_exit(S32 code)
{
    Syscall_exitRaw(code);
}

#endif // ACTIVE_SYSCALL_H
