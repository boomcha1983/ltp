/*
* Copyright (c) 2015 Fujitsu Ltd.
* Author: Xiao Yang <yangx.jy@cn.fujitsu.com>
*
* This program is free software; you can redistribute it and/or modify it
* under the terms of version 2 of the GNU General Public License as
* published by the Free Software Foundation.
*
* This program is distributed in the hope that it would be useful, but
* WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
*
* You should have received a copy of the GNU General Public License
* alone with this program.
*/

#ifndef PWRITEV_H
#define PWRITEV_H

#include <sys/types.h>
#include "config.h"
#include "linux_syscall_numbers.h"

#if !defined(HAVE_PWRITEV)
int pwritev(int fd, const struct iovec *iov, int iovcnt, off_t offset)
{
	return tst_syscall(__NR_pwritev, fd, iov, iovcnt, offset);
}
#endif

#endif /* PWRITEV_H */
