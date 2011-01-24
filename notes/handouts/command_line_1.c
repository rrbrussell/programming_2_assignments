#include <stdio.h>

main (int argc, char *argv[]) {

  int i;

  printf("There were %d things on the command line\n",argc);

  printf("They were:\n");

  i = 0;
  while (i < argc) {
    printf("argv[%d] is %s\n",i,argv[i]);
    i++;
  }




}
