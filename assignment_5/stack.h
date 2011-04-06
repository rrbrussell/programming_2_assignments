/* assignment_5/stack.h
   The header for a stack implementation
   Requires C99
*/

#ifndef ASSIGNMENT_5_STACK_H
#define ASSIGNMENT_5_STACK_H

#include <stdbool.h>

/* Prototype the struct in the typedef just to make the compiler happy */
typedef struct aNode *stackNode;

struct aNode {
  int data;
  stackNode next;
};


void stackInit(stackNode stack);

int popStack(stackNode stack);
void pushStack(stackNode stack, int data);

bool isStackEmpty(stackNode stack);
bool isStackFull(stackNode stack);
#endif
