#include <math.h>
#include <stdio.h>
#include <stdlib.h>

const char *show_classification(double x) {
  switch(fpclassify(x)) {
    case FP_INFINITE:   return "Inf";
    case FP_NAN:        return "NaN";
    case FP_NORMAL:     return "normal";
    case FP_SUBNORMAL:  return "subnormal";
    case FP_ZERO:       return "zero";
    default:            return "unknown";
  }
}

int main(void) {
  double d1 = 22.2;
  double d2 = 0;
  
  printf("The classification of %f is %s\n", d1, 
        show_classification(d1));
  printf("The classification of %f is %s\n", d2, 
        show_classification(d2));

  return EXIT_SUCCESS;
}