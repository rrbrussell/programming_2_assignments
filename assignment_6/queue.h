/* assignment_6/queue.h
   Queue prototypes for assignment_6
   Requires C99 for bool type
*/

#ifndef ASSIGNMENT_6_QUEUE_H
#define ASSIGNMENT_6_QUEUE_H

#include <stdbool.h>

/* Prototype the struct in the typedef just to make the compiler happy */
typedef struct aNode *queueNode;

struct aNode {
  int data;
  queueNode next;
};

typedef struct queueStruct {
  queueNode first;
  queueNode last;
} *queue;

void initializeQueue(queue *aQueue);

int takeFromQueue(queue aQueue);
void addToQueue(queue aQueue, int data);

bool isQueueEmpty(queue aQueue);
bool isQueueFull(queue aQueue);

void printQueue(queue aQueue);
void emptyQueue(queue aQueue);
#endif
