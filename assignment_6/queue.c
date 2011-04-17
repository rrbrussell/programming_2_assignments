/* assignment_6/queue.c
   Queue implementation for assignment 6
   Requires C99 for bool type
*/

#include "queue.h"
#include <stdlib.h>
#include <stdio.h>

void initializeQueue(queue aQueue) {
  aQueue = (queue) malloc(sizeof(struct queueStruct));
  aQueue->first = NULL;
  aQueue->last = NULL;
}

int takeFromQueue(queue aQueue) {
  int data;
  queueNode temp = aQueue->first;
  data = aQueue->first->data;
  aQueue->first = aQueue->first->next;
  free(temp);
  return data;
}

void addToQueue(queue aQueue, int data) {
  queueNode temp = (queueNode) malloc(sizeof(struct aNode));
  temp->data = data;
  temp->next = NULL;
  aQueue->last->next = temp;
  aQueue->last = temp;
}


