#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  printf("There were %d thing on the command line.\n", argc);
  printf("They were:\n");
  int i;
  for(i = 0; i < argc; ++i) {
    printf("argv[%d] %s\n",i, argv[i]);
    }
  return EXIT_SUCCESS;
}
