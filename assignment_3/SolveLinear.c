/* Programming 2 - Assignment 3
   Robert R. Russell
   SolveLinear.c
*/

#include "SolveLinear.h"
#include <stdio.h>

void SolveLinear(float b, float c) {
  if(b == 0.0) {
    if(c != 0.0) {
      printf("Pure absurdity\n");
    } else {
      printf("Infinitely many solutions\n");
    }
  } else {
    printf("%f\n", -c/b);
  }
}
