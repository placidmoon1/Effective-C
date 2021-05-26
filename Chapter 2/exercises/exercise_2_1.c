/** Exercise 2.1
 *  Add a retrieve function that retrieves the current value of counter.
 *  Input: void
 *  Output: Current value of counter (unsigned int)
 *  
 */ 

#include <stdio.h>
#include <stdlib.h>

static unsigned int counter = 0;

void increment(void) {
  counter++;
  printf("%d ", counter);
}

unsigned int retrieve(void) {
  return counter;
}

int main(void) {
  printf("Current value of counter: %d\n", retrieve()); //0
  for (int i = 0; i < 5; i++) {
    increment();
  }
  printf("\n");
  printf("Current value of counter: %d\n", retrieve()); //5
  return EXIT_SUCCESS;
}