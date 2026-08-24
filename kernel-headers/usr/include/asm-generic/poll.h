/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */
#ifndef __ASM_GENERIC_POLL_H
#define __ASM_GENERIC_POLL_H

/* These are specified by iBCS2 */
#define POLLIN		(__poll_t)0x0001
#define POLLPRI		(__poll_t)0x0002
#define POLLOUT		(__poll_t)0x0004
#define POLLERR		(__poll_t)0x0008
#define POLLHUP		(__poll_t)0x0010
#define POLLNVAL	(__poll_t)0x0020

/* The rest seem to be more-or-less nonstandard. Check them! */
#define POLLRDNORM	(__poll_t)0x0040
#define POLLRDBAND	(__poll_t)0x0080
#ifndef POLLWRNORM
#define POLLWRNORM	(__poll_t)0x0100
#endif
#ifndef POLLWRBAND
#define POLLWRBAND	(__poll_t)0x0200
#endif
#ifndef POLLMSG
#define POLLMSG		(__poll_t)0x0400
#endif
#ifndef POLLREMOVE
#define POLLREMOVE	(__poll_t)0x1000
#endif
#ifndef POLLRDHUP
#define POLLRDHUP       (__poll_t)0x2000
#endif

#define POLLFREE	(__poll_t)0x4000	/* currently only for epoll */

#define POLL_BUSY_LOOP	(__poll_t)0x8000

struct pollfd {
	int fd;
	short events;
	short revents;
};

#endif	/* __ASM_GENERIC_POLL_H */
