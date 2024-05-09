/* $NetBSD: cargl.c,v 1.1 2014/10/10 00:48:18 christos Exp $ */

/*
 * Public domain.
 */

#include <complex.h>
#include <math.h>

#undef HAVE_atan2l
#if defined (_LDBL_EQ_DBL) || defined (__CYGWIN__) ||			\
	defined(__aarch64__) || defined(__i386__) || defined(__x86_64__) || \
	defined(__riscv)
#ifndef _REENT_ONLY
#ifndef __math_68881
#define HAVE_atan2l
#endif
#endif
#endif

long double
cargl(long double complex z)
{     
       #if defined _LDBL_EQ_DBL || !defined HAVE_atan2l
         return carg (z);
       #else
         return atan2l (cimagl (z), creall (z));
       #endif
}
