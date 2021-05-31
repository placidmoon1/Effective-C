#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int si_deci, si_octal, si_hex;
  si_deci = 100;
  si_octal= 0100;
  si_hex = 0x100;

  printf("Value %d, represented as %s in decimal\n", si_deci, "100");
  printf("Value %d, represented as %s in octal\n", si_octal, "0100");
  printf("Value %d, represented as %s in hex\n", si_hex, "0x100");


  return EXIT_SUCCESS;
}