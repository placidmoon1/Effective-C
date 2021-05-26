#include <stdio.h>
#include <stdlib.h>

int main(void) {
  union {
    struct {
      int type;
    } n;
    struct {
      int type;
      int intnode;
    } ni;
    struct {
      int type;
      double doublenode;
    } nf;
  } u;
  u.nf.type = 1;
  u.nf.doublenode = 3.14;
  printf("Type is %d, value is %f\n", u.nf.type, u.nf.doublenode);

  return EXIT_SUCCESS;
}