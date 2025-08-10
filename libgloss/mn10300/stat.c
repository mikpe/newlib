#include <_ansi.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "trap.h"


int
_stat (const char *path, struct stat *st)

{
  return TRAP0 (SYS_stat, (unsigned long) path, (unsigned long) st, 0);
}
