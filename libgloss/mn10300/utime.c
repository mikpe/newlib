#include <_ansi.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "trap.h"


int
utime (path, times)
     const char *path;
     char *times;
{
  return TRAP0 (SYS_utime, (unsigned long) path, (unsigned long) times, 0);
}
