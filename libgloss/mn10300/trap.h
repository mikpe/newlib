#include "syscall.h"

int __trap0 (unsigned long, unsigned long, unsigned long, unsigned long);

#define TRAP0(f, p1, p2, p3) __trap0(f, (p1), (p2), (p3))
