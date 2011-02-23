/* Programming 2 - Assignment 3
   Main Program File
   Robert R. Russell

   This program finds the roots of a quadratic equations using the quadratic formula */

#include <stdio.h>
#include <stdlib.h>
#include "SolveLinear.h"
#include "SolveQuadratic.h"

int main(int argc, char *argv[]) {
  float a, b, c;
  if((argc < 3) || (argc > 4)) {
    printf("usage \"solvequad a b c\" you may skip a if a is 0\n");
    exit(EXIT_FAILURE);
  } else {
    if(argc == 3) {
      a = 0;
      sscanf(argv[1], "%f", &b);
      sscanf(argv[2], "%f", &c);
    } else {
      sscanf(argv[1], "%f", &a);
      sscanf(argv[2], "%f", &b);
      sscanf(argv[3], "%f", &c);
    }
    if(a == 0) {
      SolveLinear(b,c);
    } else {
      SolveQuadratic(a,b,c);
    }
  }
  exit(EXIT_SUCCESS);
}
