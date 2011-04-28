/* assignment_7/tree.h
   Programming 2 Assignment 7 Binary Tree implementation

   Requires C99
*/

#ifndef ASSINGMENT_7_TREE_h
#define ASSINGMENT_7_TREE_h

#include <stdbool.h>

/* Prototype the struct in the typedef just to make the compiler happy */

typedef struct treeNode *BinaryTree;

struct treeNode
  {
    int data;
    BinaryTree left;
    BinaryTree right;
  };

void deleteFromTree ( BinaryTree* aTree, int data );
void initializeTree ( BinaryTree *aTree );
void addToTree ( BinaryTree *aTree, int data );
int takeFromTree ( BinaryTree *aTree, int data );
bool isTreeEmpty ( BinaryTree aTree );
bool isTreeFull ( BinaryTree aTree );
void printTree ( BinaryTree *aTree );
void emptyTree ( BinaryTree *aTree );

#endif
