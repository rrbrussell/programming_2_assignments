/* Programming 2 - Assignment 3
   Robert R. Russell
   SolveReal.c
*/

#include "SolveReal.h"
#include <stdio.h>
#include <math.h>

void SolveReal(float a, float b, float c) {
  printf("%f and ", -b/(2*a)+sqrtf(powf(b,2.0)-4*a*c)/(2*a));
  printf("%f\n", -b/(2*a)-sqrtf(powf(b,2.0)-4*a*c)/(2*a));
}
