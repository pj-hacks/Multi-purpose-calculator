/*AUTHOR : JOSEPH PRINCE ANIEKEME
  DESCRIPTION :
  DATE : 16/12/2024
  TIME : 12:18pm
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include "arithmetic.h"
#include "trigonometry.h"
#include "utility.h"

int main() {
  int selection = 0;
  char agree;


  printf("\nThis is an upgrade of my first calculator that had so many limitations, check the git repository");
  printf("\nSelect according to the number, not according to the words\n");
  printf("Enter n or N in any part of the calculator to exist the secsion\n");
  printf("1. ARITHEMATIC\n2. LOGARITHM\n3. TRIGONOMETRY\n");
  printf("Enter: ");
  //taking the input of the user selected choice
  scanf("%d", &selection);

  //clear buffer
  clear_buffer();

  do {
    switch(selection) {
      case 1:
      printf("\nYou are working with arithematics\n");
      arithmetic();
      break;
      case 2:
      printf("\nYou are working with logarithm\n");
      //logarithm();
      break;
      case 3:
      printf("\nYou are working with trigonometry\n");
      trigonometry();
      break;
      default:
      printf("Out of range, select 1 through 3.\n");
      break;
    }

    printf("\nTrust you enjoyed our service\n");
    printf("\nDo you want to continue (y or n):  :");
    scanf("%c", &agree);
    clear_buffer();

    if(agree == 'y' || agree == 'Y') {
      printf("\nWelcome back");
      printf("\nSelect according to the number, not according to the words:\n");
      printf("1. ARITHEMATIC\n2. LOGARITHM\n3. TRIGONOMETRY\n");
      printf("\ni will like to go with:");
      //taking the input of the user selected choice
      scanf("%d", &selection); // thaking the user decision
      clear_buffer(); //clear buffer
    }
  }while(agree == 'y' || agree == 'Y');

} //This is the end of the main function

