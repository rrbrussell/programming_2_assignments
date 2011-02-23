/* Programming 2 - Assignment 3
   Robert R. Russell
   SolveQuadratic.c
*/

#include "SolveQuadratic.h"
#include <stdio.h>
#include <math.h>
#include "SolveComplex.h"
#include "SolveReal.h"

void SolveQuadratic(float a, float b, float c) {
  /*printf("called SolveQuadratic(%f, %f, %f)\n", a, b, c);*/
  if((powf(b,2.0)-4*a*c) < 0) {
    SolveComplex(a, b, c);
  } else {
    SolveReal(a, b, c);
  }
}
