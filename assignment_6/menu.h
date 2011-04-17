/* assignment_6/menu.h
   Menu tools for Programming 2 Assignment 6
*/

#ifndef ASSIGNMENT_6_MENU_H
#define ASSIGNMENT_6_MENU_H

#include <stdlib.h>
#include <stdio.h>

char mainMenuString[] =
  "Main Menu\n" \
  "1. Add to stack\n" \
  "2. Delete from stack\n" \
  "3. List the stack\n" \
  "4. Quit\n";

char choiceString[] = "Your Choice: ";

int fetchINT(FILE* stream);

#endif
