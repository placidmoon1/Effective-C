#include <stdio.h>
#include <stdlib.h>

void swap1(int, int);
void swap2(int*, int*);

int main(void) {
    int a = 17;
    int b = 21;
    int c = 17;
    int d = 21;
    swap1(a, b);
    swap2(&c, &d);
    printf("main: a = %d, b = %d\n", a , b);
    printf("main: c = %d, d = %d\n", c , d);
    return EXIT_SUCCESS;
}

void swap1(int a, int b) {
    int t = a;
    a = b;
    b = t;
    printf("swap1: a = %d, b = %d\n", a , b);
}

void swap2(int *c, int *d) {
    int t = *c;
    *c = *d;
    *d = t;
    printf("swap2: c = %d, d = %d\n", *c , *d);
}