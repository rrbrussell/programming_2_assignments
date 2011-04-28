/* assignment_6/main.c
   Main function for Programming 2 Assignment 6
   Requires C99
*/

#include <stdlib.h>
#include <stdio.h>
#include "tree.h"
#include "menu.h"

char mainMenuString[] =
  "Main Menu\n" \
  "1. Add to queue\n" \
  "2. Delete from queue\n" \
  "3. List the queue\n" \
  "4. Quit\n" \
  "Your Choice: ";

#define AddToTree 1
#define TakeFromTree 2
#define PrintTree 3
#define Quit 4
  
int main()
{
  char programName[] = "trees";

  int data;
  int chosenOperation;

  printf ( "Welcome to %s\n", programName );

  BinaryTree *theTree = NULL;
  initializeTree ( theTree );

  do
    {
      printf ( "%s", mainMenuString );
      chosenOperation = fetchINT ( stdin );
      switch ( chosenOperation )
        {
        case AddToTree:
          if ( isTreeFull ( *theTree ) )
            {
              printf ( "sorry the queue is full\n" );
            }
          else
            {
              printf ( "Enter a number: " );
              data = fetchINT ( stdin );
              addToTree ( theTree, data );
            }
          break;
        case 2:
          if ( isTreeEmpty ( *theTree ) )
            {
              printf ( "sorry the queue is empty\n" );
            }
          else
            {
              printf ( "The number is %d\n", takeFromTree ( theTree, data ) );
            }
          break;
        case 3:
          if ( isTreeEmpty ( *theTree ) )
            {
              printf ( "sorry the queue is empty\n" );
            }
          else
            {
              printTree ( theTree );
            }
          break;
        case 4:
          printf ( "bye\n" );
          break;
        default:
          printf ( "Oops Wrong input\n" );
          chosenOperation = AddToTree;
        }

    }
  while ( ! ( ( chosenOperation < AddToTree )
              || ( chosenOperation >= Quit ) ) );
  emptyTree ( theTree );
  free ( theTree );
  return EXIT_SUCCESS;
}
