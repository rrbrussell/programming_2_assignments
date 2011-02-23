/* Programming 2 - Assignment 3
   Robert R. Russell
   SolveComplex.c
*/

#include "SolveComplex.h"
#include <stdio.h>
#include <math.h>

void SolveComplex(float a, float b, float c) {
  printf("%f+%f*i and ", -b/(2*a), sqrtf(-1*(powf(b,2.0)-4*a*c))/(2*a));
  printf("%f-%f*i\n", -b/(2*a), sqrtf(-1*(powf(b,2.0)-4*a*c))/(2*a));
}
