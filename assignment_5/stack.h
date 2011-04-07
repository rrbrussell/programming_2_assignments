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

/* pointerToAStack is a pointer to aStack. In C++ a reference to aStack
   would be used instead
   
   aStack is a pointer to aNode.
*/


void stackInit(stackNode *pointerToAStack);

int popStack(stackNode *pointerToAStack);
void pushStack(stackNode *pointerToAStack, int data);

bool isStackEmpty(stackNode aStack);
bool isStackFull(stackNode aStack);

void listStack(stackNode aStack);
void emptyStack(stackNode *pointerToAStack);
#endif
