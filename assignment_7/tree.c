/* assignment_7/tree.c
   Programming 2 Assignment 7 Binary Tree implementation

   Requires C99
*/

#include <stdlib.h>
#include "tree.h"

void initializeTree ( BinaryTree* aTree )
{
  (*aTree = NULL);
}

bool isTreeEmpty ( BinaryTree aTree )
{
  bool returnValue = false;
  if(aTree != NULL) {
    returnValue = true;
  }
  return returnValue;
}

bool isTreeFull ( BinaryTree aTree )
{
  bool returnValue = true;
  BinaryTree temp = NULL;
  temp = (BinaryTree) malloc(sizeof(BinaryTree));
  if(temp != NULL) {
    returnValue = false;
  }
  free(temp);
  return returnValue;
}


void addToTree ( BinaryTree* aTree, int data )
{
  BinaryTree* temp;
  if(aTree == NULL) {
    (*aTree) = (BinaryTree) malloc(sizeof(BinaryTree));
    (*aTree)->data = data;
  } else {
    if(data < (*aTree)->data) {
      addToTree(&((*aTree)->right), data);
    } else {
      addToTree(&((*aTree)->left), data);
    }
  }
}

void deleteFromTree ( BinaryTree *aTree, int data )
{
  BinaryTree tempNode = ( *aTree );
  if ( tempNode != NULL )
    {
      if ( tempNode->data == data )
        {
          /* We have found a node containing the data we are looking for */
          if ( tempNode->right != NULL )
            {
              if ( tempNode->left == NULL )
                {
                  /* Only the right child is full. Just replace *aTree
                   * with the right child. */
                  ( *aTree ) = ( *aTree )->right;
                  free ( tempNode );
                  tempNode = NULL;
                }
              else
                {
                  /* tempNode has two children. */
                }
            }
          else
            {
              /* tempNode->right is NULL. */
              if ( tempNode->left != NULL )
                {
                  /* Only the left child is full. Just replace *aTree
                   * with the left child. */
                  ( *aTree ) = ( *aTree )->left;
                  free ( tempNode );
                  tempNode = NULL;
                }
              else
                {
                  /* There are no children. */
                  ( *aTree ) = NULL;
                  free ( tempNode );
                  tempNode = NULL;
                }
            }
        }
    }
}


void printTree ( BinaryTree* aTree )
{
// TODO
}

void emptyTree ( BinaryTree* aTree )
{
  BinaryTree temp = *aTree;
  if(temp->left != NULL) {
    emptyTree(&(temp->left));
  }
  if(temp->right != NULL) {
    emptyTree(&(temp->right));
  }
  aTree = NULL;
  free(temp);
}

int takeFromTree ( BinaryTree* aTree, int data )
{
  int returnValue = 0;
  return returnValue;
}
