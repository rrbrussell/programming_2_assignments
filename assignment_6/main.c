/* assignment_6/main.c
   Main function for Programming 2 Assignment 6
   Requires C99
*/

#include <stdlib.h>
#include <stdio.h>
#include "queue.h"
#include "menu.h"

int main() {
  char programName[] = "queuer";
  /*const int addToStack = 1;
  const int deleteFromStack = 2;
  const int listAStack = 3;
  const int quit = 4;

  char *line = (char *) malloc(81*sizeof(char));
  size_t *length;
  *length = 80;
  int data;
  int chosenOperation;
  stackNode theStack = NULL;
  stackInit(theStack);
  */
  printf("Welcome to %s\n", programName);
  /*
  do {
  print("%s%s", main_menu_string, choice_string);
    getline(&line, length, stdin);
    sscanf(line, "%d", &chosenOperation);
    *length = 80;
    switch(chosenOperation) {
    case 1:
      if(isStackFull(theStack)) {
	printf("sorry the stack is full\n");
      } else {
	printf("Enter a number: ");
	getline(&line, length, stdin);
	sscanf(line,"%d", &data);
	pushStack(theStack, data);
	*length = 80;
	printf("theStack is now %p\n", (void *) theStack);
      }
      break;
    case 2:
      if(isStackEmpty(theStack)) {
	printf("sorry the stack is empty\n");
      } else {
	printf("The number is %d\n", popStack(theStack));
      }
      break;
    case 3:
      if(isStackEmpty(theStack)) {
	printf("sorry the stack is empty\n");
      } else {
	listStack(theStack);
      }
      break;
    case 4:
    default:
      printf("bye\n");
    }
      
  } while (!((chosenOperation < addToStack)
	     || (chosenOperation >= quit)));
  free(line);
  free(theStack);
  line = NULL;*/
  return EXIT_SUCCESS;
}
