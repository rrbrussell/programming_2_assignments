#include "solve_linear.h"
#include "stdio.h"

void solve_linear(float b, float c) {
  printf("from solve_linear b = %f, c = %f\n",b,c);
  if(b!=0) {
    printf("x = %f\n", -c/b);
  } else if (c!=0) {
    printf("That is absurd");
  } else {
    printf("There are infinitely many solutions");
  }
}
