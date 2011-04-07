/* assignment_5/stack.c
   Stack implementation for assignment 5
   Requires C99
*/

#include "stack.h"
#include <stdlib.h>
#include <stdio.h>

void stackInit(stackNode *pointerToAStack) {
  *pointerToAStack = NULL;
}

int popStack(stackNode *pointerToAStack) {
  stackNode tempNode = *pointerToAStack;
  int tempData = (*pointerToAStack)->data;
  *pointerToAStack = (*pointerToAStack)->next;
  free(tempNode);
  tempNode = NULL;
  return tempData;
}

void pushStack(stackNode *pointerToAStack, int data) {
  stackNode tempNode = (struct aNode *) malloc(sizeof(struct aNode));
  tempNode->data = data;
  tempNode->next = *pointerToAStack;
  *pointerToAStack = tempNode;
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
  while(!isStackEmpty(currentNode)) {
    printf("Node: %p\nData: %i\n",
	   (void*) currentNode, currentNode->data);
    currentNode = currentNode->next;
  }
}

void emptyStack(stackNode *pointerToAStack) {
  stackNode currentNode = *pointerToAStack;
  while(isStackEmpty(currentNode)) {
    stackNode tempNode = currentNode;
    currentNode = currentNode->next;
    free(tempNode);
  }
}
  
