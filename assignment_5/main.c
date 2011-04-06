/* assignment_5/main.c
   Main function for Programming 2 Assignment 5
   Requires C99
*/

#include <stdlib.h>
#include <stdio.h>
#include "stack.h"

int main() {
  const int addToStack = 1;
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
  printf("Welcome to stacker\n");
  do {
    printf("Main Menu\n");
    printf("1. Add to stack\n");
    printf("2. Delete from stack\n");
    printf("3. List the stack\n");
    printf("4. Quit\n");
    printf("Your Choice: ");
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
  line = NULL;
  return EXIT_SUCCESS;
}
