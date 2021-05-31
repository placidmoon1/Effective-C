#include <stdio.h>
#include <stdlib.h>

int main(void){
  int si = 5;
  short ss = 8;

  long sl = (long) si; // safe casting. 
  unsigned short us = (unsigned short) (si + ss);

  printf("sl: %ld, us: %u\n", sl, us); 

  return EXIT_SUCCESS;
}