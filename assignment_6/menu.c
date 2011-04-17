/* assignment_6/menu.c
   Menu tools for Programming 2 Assignment 6
   requires C99 for strtol
*/

#include "menu.h"

char mainMenuString[] =
  "Main Menu\n" \
  "1. Add to stack\n" \
  "2. Delete from stack\n" \
  "3. List the stack\n" \
  "4. Quit\n";

char choiceString[] = "Your Choice: ";

int fetchINT(FILE* stream) {
  char *line = (char *) malloc(81*sizeof(char));
  size_t *length = (size_t *) malloc(sizeof(size_t));
  int number;
  *length = 80;
  getline(&line, length, stream);
  sscanf(line, "%d", &number);
  free(line);
  free(length);
  return number;
}
    
