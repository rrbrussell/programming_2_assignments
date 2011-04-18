/* assignment_6/queue.c
   Queue implementation for assignment 6
   Requires C99 for bool type
*/

#include "queue.h"
#include <stdlib.h>
#include <stdio.h>

void initializeQueue(queue *aQueue) {
  *aQueue = (queue) malloc(sizeof(struct queueStruct));
  (*aQueue)->first = NULL;
  (*aQueue)->last = NULL;
}

int takeFromQueue(queue aQueue) {
  int data;
  queueNode temp = aQueue->first;
  data = aQueue->first->data;
  aQueue->first = aQueue->first->next;
  if(aQueue->first == NULL) {
    aQueue->last = NULL;
  }
  free(temp);
  return data;
}

void addToQueue(queue aQueue, int data) {
  queueNode temp = (queueNode) malloc(sizeof(struct aNode));
  temp->data = data;
  temp->next = NULL;
  if(isQueueEmpty(aQueue)) {
    aQueue->last = temp;
    aQueue->first = temp;
  } else {
    aQueue->last->next = temp;
    aQueue->last = temp;
  }
}


bool isQueueEmpty(queue aQueue) {
  bool result = false;
  if(aQueue->last == NULL && aQueue->first == NULL) {
    result = true;
  }
  return result;
 }

bool isQueueFull(queue aQueue) {
  bool result = false;
  queueNode temp = (queueNode) malloc(sizeof(struct aNode));
  if(temp == NULL) {
    result = true;
  }
  free(temp);
  return result;
}

void printQueue(queue aQueue) {
  queueNode current = aQueue->first;
  while(current != NULL) {
    printf("Node: %p\nData: %i\n", (void*) current,
	   current->data);
    current = current->next;
  }
}

void emptyQueue(queue aQueue) {
  while(!isQueueEmpty(aQueue)) {
    takeFromQueue(aQueue);
  }
}
