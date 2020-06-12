/* SPDX-License-Identifier: GPL-2.0 WITH Linux-syscall-note */
#ifndef FADVISE_H_INCLUDED
#define FADVISE_H_INCLUDED

#define POSIX_FADV_NORMAL	0 /* No further special treatment.  */
#define POSIX_FADV_RANDOM	1 /* Expect random page references.  */
#define POSIX_FADV_SEQUENTIAL	2 /* Expect sequential page references.  */
#define POSIX_FADV_WILLNEED	3 /* Will need these pages.  */

/*
 * The advise values for POSIX_FADV_DONTNEED and POSIX_ADV_NOREUSE
 * for s390-64 differ from the values for the rest of the world.
 */
#if defined(__s390x__)
#define POSIX_FADV_DONTNEED	6 /* Don't need these pages.  */
#define POSIX_FADV_NOREUSE	7 /* Data will be accessed once.  */
#else
#define POSIX_FADV_DONTNEED	4 /* Don't need these pages.  */
#define POSIX_FADV_NOREUSE	5 /* Data will be accessed once.  */
#define POSIX_FADV_STREAM_ASSIGN    0xa /* allocate a stream */
#define POSIX_FADV_STREAM_RELEASE   0xb /* release a stream */
#define POSIX_FADV_STREAM_GET     0xc /* get current stream */

#define STREAM_F_INODE  1 /* associate stream ID with inode */
#define STREAM_F_FILE   2 /* associate stream ID with file */
#endif

#endif	/* FADVISE_H_INCLUDED */
