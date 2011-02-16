
#include <stdio.h>
#include <stdlib.h>



main(int argc, char *argv[]) {

  int a, b, c;

  if( (argc <3) || (argc >4) ) {
    printf("usage : a.out [a] b c\n");
    exit(EXIT_FAILURE);
  }

  if(argc == 3) { /* 0x^2 + bx + c = 0 */
    a = 0;
    sscanf(argv[1],"%f",&b);
    sscanf(argv[2],"%f",&c);
    
    solve_linear(a, b, c);
  }
