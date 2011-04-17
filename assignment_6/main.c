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
  const int addToQueue = 1;
  const int quit = 4;

  int data;
  int chosenOperation;

  printf("Welcome to %s\n", programName);
  
  do {
  printf("%s", mainMenuString);
  chosenOperation = fetchINT(stdin);
    switch(chosenOperation) {
    case 1:
      /*if(isQueueFull(theQueue)) {
	printf("sorry the queue is full\n");
	} else {*/
      printf("Enter a number: ");
      data = fetchINT(stdin);
      printf("You entered: %d\n", data);
      //}
      break;
    case 2:
      /*if(isQueueEmpty(theQueue)) {
	printf("sorry the queue is empty\n");
      } else {
	printf("The number is %d\n", popQueue(theQueue));
	}*/
      printf("fetching from the queue\n");
      break;
    case 3:
      /*if(isQueueEmpty(theQueue)) {
	printf("sorry the queue is empty\n");
      } else {
	listQueue(theQueue);
	}*/
      printf("printing the queue\n");
      break;
    case 4:
      printf("bye\n");
      break;
    default:
      printf("Oops Wrong input\n");
      chosenOperation = addToQueue;
    }
      
  } while (!((chosenOperation < addToQueue)
	     || (chosenOperation >= quit)));
  //free(theQueue);
  return EXIT_SUCCESS;
}
