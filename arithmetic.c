#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "utility.h"

void arithmetic() {

  unsigned long int factorial_answer = 1,
  factorial;
  double squarenum;
  float square,
  number;
  int sum,
  subnum,
  selection,
  result;
  int first = 1;
  char agree;
  char add[300],
  add2[200];
  char sub[200],
  sub2[200];
  char Div[200],
  Div2[200];
  char mul[300],
  mul2[200];
  printf("\nWelcome to the arithematic section of this calculator\n");
  printf("This are the available features\n");
  printf("1. ADDITION\n2. SUBTRACTION\n3. MULTIPLICATION\n4. DIVISION\n5. SQUARE\n6. FACTORIAL\n7. SQUARE ROOT\n");
  printf("Enter: ");
  scanf("%d", &selection);
  clear_buffer(); // CLEAR BUFFER

  switch(selection) {
    // for sellecting arethematic operator
    case 1: //for addition
    while(1) {
      sum = 0;
      memset(add, 0, sizeof(add));
      memset(add2, 0, sizeof(add2));
      printf("Provide the numbers you want to add together (4+5+67+678+67) :");
      fgets(add, sizeof(add), stdin);
      remove_newline(add);
      strcpy(add2, add);
      const char * tokenadd = strtok(add, "+");
      /* printf("%s\n",add; */
      while(tokenadd != NULL) {
        sum += atoi(tokenadd); // converting the strings from the token into numvers
        tokenadd = strtok(NULL, "+");
      }
      printf("\n%s = %d\n", add2, sum);
      printf("\nDo you want to continue(y or n): ");
      scanf("%c", &agree);
      clear_buffer();
      if(agree == 'y' || agree == 'Y') {
        continue;
      }
      else {
        printf("\nLeaving the addition section\n");
        break;
      }
    } // first while loop in the arithematic function
    break; // End of the first case

    case 2: // Subtracton
    while(1) {
      result = 0; // Reseting the result variable to 0, so there wont be any conflicting result for subsequent operations
      first = 1; // Reseting the first number extracter to one in other to handle subsequent operations
      memset(sub, 0, sizeof(sub)); //  Clearing the memory of sub in other to avoid any conflicting memory
      memset(sub2, 0, sizeof(sub2)); //  Clearing the memory of sub2 in other to avoid any conflicting memory
      printf("Provide the numbers you want to add together (4-5-67-678-67) :");
      fgets(sub, sizeof(sub), stdin);
      remove_newline(sub); // Removing the remaining trash in the memory
      strcpy(sub2, sub); // Copying sub into sub2
      const char * tokensub = strtok(sub, "-"); // Saperating the the string in sub into sections because of the delimeter
      /* printf("%s\n",add); */
      while(tokensub != NULL) {
        if(first) {
          // this must always be true when ever the program runs
          result = atoi(tokensub);
          first = 0;
        }
        else {
          subnum = atoi(tokensub); // converting the strings from the token into numvers
          result -= subnum;
        }
        tokensub = strtok(NULL, "-");
      }
      printf("\n%s = %d\n", sub2, result); // Printing the sub value
      printf("\nDo you wish to continue (y or n): ");
      scanf("%c", &agree);
      clear_buffer();
      if(agree == 'y' || agree == 'Y') {
        continue;
      }
      else {
        printf("\nLeaving the subtraction section\n");
        break;
      }

    } // second while loop in the arithematic function
    break; //end of the second cade

    case 3: // FOR MULTIPLICATION
    while(1) {
      // for the third while loop
      sum = 1;
      memset(mul, 0, sizeof(mul));
      memset(mul2, 0, sizeof(mul2));
      printf("Provide the numbers you want to add together (4+5+67+678+67) :");
      fgets(mul, sizeof(mul), stdin);
      remove_newline(mul);
      strcpy(mul2, mul);
      const char * tokenmul = strtok(mul, "*");
      /* printf("%s\n",add); */
      while(tokenmul != NULL) {
        sum *= atoi(tokenmul); // converting the strings from the token into numvers
        tokenmul = strtok(NULL, "*");
      }
      printf("\n%s = %d\n", mul2, sum);
      printf("\nDo you want to continue(y or n): ");
      scanf("%c", &agree);
      clear_buffer();
      if(agree == 'y' || agree == 'Y') {
        continue;
      }
      else {
        printf("\nLeaving the addition section\n");
        break;
      }

    } // first while loop in the arithematic function
    break; // End of multiplication

    case 4: //  for division
    while(1) {
      // for the third while loop
      sum = 1;
      number = 0;
      memset(Div, 0, sizeof(Div));
      memset(Div, 0, sizeof(Div2));
      printf("Provide the numbers you want to add together (4/5/67/678/67) :");
      fgets(Div, sizeof(Div), stdin);
      remove_newline(Div);
      strcpy(Div2, Div);
      const char * tokenDiv = strtok(Div, "/");
      /* printf("%s\n",add); */
      while(tokenDiv != NULL) {
        if(first) {
          number = atoi(tokenDiv);
          if(number == 0) {
            break;
          }
          first = 0;
        }
        else {
          sum = atoi(tokenDiv); // converting the strings from the token into numvera
          number /= sum;
        }
        tokenDiv = strtok(NULL, "/");
      }
      printf("\n%s = %f\n", Div2, number);
      printf("\nDo you want to continue(y or n): ");
      scanf("%c", &agree);
      clear_buffer();
      if(agree == 'y' || agree == 'Y') {
        continue;
      }
      else {
        printf("\nLeaving the addition section\n");
        break;
      }
    } // first while loop in the arithematic function
    break; // End of the division section

    case 5: // For square operator
    while(1) {
      printf("\nWorking on square operation.\n");
      printf("Enter number: ");
      scanf("%lf", &squarenum);
      clear_buffer();
      square = pow(squarenum, 2);
      printf("The square of %lf is %f \n", squarenum, square);
      printf("\nDo you want to continue(y or n): ");
      scanf("%c", &agree);
      clear_buffer();
      if(agree == 'y' || agree == 'Y') {
        continue;
      }
      else {
        printf("\nLeaving the addition section\n");
        break;
      }
    } // first while loop in the arithematic function
    break; // End of the fourth case

    case 6: // for factorial z
    while(1) {
      factorial_answer = 1;
      factorial = 0;
      printf("This is factorial section\n");
      printf("You just have to enter the number you wants to know its factorial\n");
      printf("\nEnter number:");
      scanf("%lu", &factorial);
      clear_buffer();
      for(; factorial >= 1; factorial--) {
        factorial_answer *= factorial;
      }
      printf("\nThe factorial of %lu is %lu\n", factorial, factorial_answer);
      printf("\nDo you wish to continue (y or n): ");
      scanf("%c", &agree);
      clear_buffer();
      if(agree == 'y' || agree == 'Y') {
        continue;
      }
      else {
        break;
      }
    } // for whike
    break;
  } // let this be the switch statement


} // The begining of the arithematic  operator