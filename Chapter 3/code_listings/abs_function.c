#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

#define Abs1(i) ((i) < 0 ? -(i) : i)

/** AbsFlagged(int, *_MIN)
 *  Checks whether the provided int is equal to flag(*_MIN)
 *  If it is equal to flag, return flag as *_MIN's absolute val is *_MIN
 *  Else, return the absolute value of i
 */ 
#define AbsFlagged(i, flag) ((i) > 0 ? (i) : ((i) == (flag) ? (flag) : -(i)))

int main(void) {
  signed int si1 = INT_MIN;
  signed int si2 = -44;

  signed int abs1 = Abs1(si1); // undefined behavior
  signed int abs1_2 = Abs1(si2);
  printf("Abs value of %d is %d\n", si1, abs1);
  printf("Abs value of %d is %d\n", si2, abs1_2);

  signed int abs2 = AbsFlagged(si1, INT_MIN); // undefined behavior
  printf("AbsFlagged: %d\n", abs2);

  return EXIT_SUCCESS;
}