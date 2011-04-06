/* assignment_5/stack.c
   Stack implementation for assignment 5
   Requires C99
*/

#include "stack.h"
#include <stdlib.h>
#include <stdio.h>

void stackInit(stackNode stack) {
  stack = NULL;
}

int popStack(stackNode stack) {
  stackNode tempNode = stack;
  int tempData = stack->data;
  stack = stack->next;
  free(tempNode);
  tempNode = NULL;
  return tempData;
}

void pushStack(stackNode stack, int data) {
  stackNode tempNode = (struct aNode *) malloc(sizeof(struct aNode));
  printf("New node allocated at %p\n", (void *) tempNode);
  tempNode->data = data;
  tempNode->next = stack;
  stack = tempNode;
  tempNode = NULL;
}

bool isStackEmpty(stackNode stack) {
  if(stack == NULL) {
    return true;
  } else {
    return false;
  }
}

bool isStackFull(stackNode stack) {
  stackNode tempNode = (struct aNode *) malloc(sizeof(struct aNode));
  bool returnValue = false;
  if(tempNode == NULL) {
    returnValue = true;
  }
  free(tempNode);
  return returnValue;
}

void listStack(stackNode stack) {
  stackNode currentNode = stack;
  #ifdef DEBUG
  printf("in listStack\n");
  #endif
  while(isStackEmpty(currentNode)) {
    printf("Node: %p\nData: %i\n",
	   // The Cast is just for printing
	   (void*) currentNode, currentNode->data);
    currentNode = currentNode->next;
  }
}

void emptyStack(stackNode stack) {
  stackNode currentNode = stack->next;
  stackNode tempNode = stack;
  while(isStackEmpty(currentNode)) {
    free(tempNode);
    tempNode = currentNode;
    currentNode = currentNode->next;
  }
}
  
