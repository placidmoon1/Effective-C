#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void) {
  printf("1. Unsigned integer wraparound\n");
  unsigned int ui = UINT_MAX;
  ui++;
  printf("ui = %u\n", ui);
  ui--;
  printf("ui = %u\n", ui);

  return EXIT_SUCCESS;
}