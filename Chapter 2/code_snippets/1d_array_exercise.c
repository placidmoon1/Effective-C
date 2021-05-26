#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char str[11];
  for (unsigned int i = 0; i < 10; ++i) {
    str[i] = '0' + i;
  }
  str[10] = '\0'; // null character to indicate end of string
  printf("%s\n", str);

  return EXIT_SUCCESS;
}