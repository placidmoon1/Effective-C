#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int i = 17;
  int *ip1 = &i; //stores the address of integer variable i
  // stores the dereferneced value of ip1 as an address.    
  int *ip2 = &(*ip1); 

  printf("i: [%d] | ip1: [%d] | ip1's address: [%p], ip2: [%p]\n",
          i, *ip1, ip1, (void*) ip2);

  return EXIT_SUCCESS;
}