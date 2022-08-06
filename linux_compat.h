#ifndef LINUX_COMPAT_H
#define LINUX_COMPAT_H

#ifdef __linux__

#define _GNU_SOURCE

#include <stdlib.h>
#include <errno.h>

extern char *program_invocation_short_name;

#define getprogname() program_invocation_short_name

#define __unreachable() __builtin_unreachable()

size_t
strlcat(char *dst, const char *src, size_t siz);

size_t
strlcpy(char *dst, const char *src, size_t siz);

_Noreturn void errc(int eval, int status, const char *fmt, ...);

#define __FBSDID(x)

#endif /* __linux__ */
#endif /* LINUX_COMPAT_H */
