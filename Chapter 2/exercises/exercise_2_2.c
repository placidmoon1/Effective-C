/** Exercise 2-2
 * - Create an array of three pointers to functions
 * - Invoke the appropriate function based on an index value 
 *   passed in the argument
 */ 

#include <stdio.h>
#include <stdlib.h>

void hello(void);
void byebye(void);
void introduce(void);

int main(int argc, char** argv) {
  if (argc != 2) {
    printf("Usage: exercise_2_2 [0~2]\n");
    exit(0);
  }

  if (atoi(argv[1]) < 0 || atoi(argv[1]) > 2) {
    printf("Usage: exercise_2_2 [0~2]\n");
    exit(0);
  }

  int index = atoi(argv[1]); 
  void (*arr[3])(void);
  
  arr[0] = hello;
  arr[1] = byebye;
  arr[2] = introduce;

  (*arr[index])(); //calling a function pointer!

  return EXIT_SUCCESS;
}

void hello(void) {
  printf("Hello, world!\n");
}

void byebye(void) {
  printf("Byebye, world!\n");
}

void introduce(void) {
  printf("Hello, my name is Kevin! How are you doing?\n");
}
