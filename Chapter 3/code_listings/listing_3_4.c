#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <errno.h>

typedef int errno_t; //typdef'ed errno_t as it wasn't defined until C11.

errno_t do_stuff(signed long val) {
  if ((val < SCHAR_MIN) || (val > SCHAR_MAX)) {
    printf("ERROR: %d has been raised due to wrong conv.\n", ERANGE);
    return ERANGE;
  }
  signed char sc = (signed char) val;
  printf("%ld is now char %c\n", val, sc);
  return 0;
}

int main(void) {
  long v1 = 33;   //safe, less than SCHAR_MAX
  long v2 = 3333; //not safe, greater than SCHAR_MAX

  do_stuff(v1);
  do_stuff(v2);

  return EXIT_SUCCESS;
}