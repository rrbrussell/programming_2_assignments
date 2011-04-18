/* assignment_6/main.c
   Main function for Programming 2 Assignment 6
   Requires C99
*/

#include <stdlib.h>
#include <stdio.h>
#include "queue.h"
#include "menu.h"

char mainMenuString[] =
  "Main Menu\n" \
  "1. Add to queue\n" \
  "2. Delete from queue\n" \
  "3. List the queue\n" \
  "4. Quit\n" \
  "Your Choice: ";

int main() {
  char programName[] = "queuer";
  const int AddToQueue = 1;
  const int quit = 4;

  int data;
  int chosenOperation;

  printf("Welcome to %s\n", programName);

  queue theQueue = NULL;
  initializeQueue(&theQueue);

  do {
  printf("%s", mainMenuString);
  chosenOperation = fetchINT(stdin);
    switch(chosenOperation) {
    case 1:
      if (isQueueFull(theQueue)) {
	printf("sorry the queue is full\n");
      } else {
	printf("Enter a number: ");
	data = fetchINT(stdin);
	addToQueue(theQueue, data);
      }
      break;
    case 2:
      if(isQueueEmpty(theQueue)) {
	printf("sorry the queue is empty\n");
      } else {
	printf("The number is %d\n", takeFromQueue(theQueue));
      }
      break;
    case 3:
      if(isQueueEmpty(theQueue)) {
	printf("sorry the queue is empty\n");
      } else {
	printQueue(theQueue);
      }
      break;
    case 4:
      printf("bye\n");
      break;
    default:
      printf("Oops Wrong input\n");
      chosenOperation = AddToQueue;
    }
      
  } while (!((chosenOperation < AddToQueue)
	     || (chosenOperation >= quit)));
  emptyQueue(theQueue);
  free(theQueue);
  return EXIT_SUCCESS;
}
