#include <stdio.h>
#include <math.h>
#include "utility.h"
#include "trigonometry.h"

void trigonometry(){
  float number_in, number_out ;
  int agree = 0;
  char proceed;
  printf("\nWelcome to trigonometry section\n");
  printf("1. SINE \n2. COSINE \n3. TANGENT \n4. SINE INVERSE \n5. COSINE INVERSE \n6. TANGENT INVERSE\n");
  printf("Enter :- ");
  scanf("%d",&agree);
  clear_buffer();
  
  switch(agree){
    case 1:
    while(1){
    printf("What is the sine of: ");
    scanf("%f",&number_in);
    clear_buffer();
    
    //converting degree to radian
    number_in = number_in * M_PI /180.0;
    
    number_out = sin(number_in);
    printf("\nThe sine of %f is %f",number_in,number_out);
    printf("\nDo you want to continiue (y or n) :- ");
    scanf("%c",&proceed);
    clear_buffer();
    
    if (proceed == 'y' || proceed == 'Y'){
      printf("\nHappy to have you back\n");
      continue;
    }
    else{
      printf("Press enter to exit...");
      getchar();
      break;
    }
  } // while loop for aine function
  break;
  
  case 2:
    while(1){
    printf("What is the co-sine of: ");
    scanf("%f",&number_in);
    clear_buffer();
    
    //converting degree to radian
    number_in = number_in * M_PI /180.0;
    
    number_out = cos(number_in);
    printf("\nThe co-sine of %f is %f",number_in,number_out);
    printf("\nDo you want to continiue (y or n) :- ");
    scanf("%c",&proceed);
    clear_buffer();
    
    if (proceed == 'y' || proceed == 'Y'){
      printf("\nHappy to have you back\n");
      continue;
    }
    else{
      printf("Press enter to exit...");
      getchar();
      break;
    }
  } // while loop for aine function
  break;
  
case 3: 
    while(1){
    printf("What is the tangent of: ");
    scanf("%f",&number_in);
    clear_buffer();
    
    //converting degree to radian
    number_in = number_in * M_PI /180.0;
    
    number_out = tan(number_in);
    
    printf("\nThe tangent of %f is %f",number_in,number_out);
    printf("\nDo you want to continiue (y or n) :- ");
    scanf("%c",&proceed);
    clear_buffer();
    
    if (proceed == 'y' || proceed == 'Y'){
      printf("\nHappy to have you back\n");
      continue;
    }
    else{
      printf("Press enter to exit...");
      getchar();
      break;
    }
  } // while loop for aine function
  break;
  
  case 4:
    while(1){
    printf("What is the sine inverse of: ");
    scanf("%f",&number_in);
    clear_buffer();
    
    
    number_out = asin(number_in);
    number_out = number_out * 180.0 /M_PI;
    printf("\nThe sine inverse of %f is %f",number_in,number_out);
    printf("\nDo you want to continiue (y or n) :- ");
    scanf("%c",&proceed);
    clear_buffer();
    
    if (proceed == 'y' || proceed == 'Y'){
      printf("\nHappy to have you back\n");
      continue;
    }
    else{
      printf("Press enter to exit...");
      getchar();
      break;
    }
  } // while loop for aine function
  break;
  
case 5:
    while(1){
    printf("What is the cos inverse of: ");
    scanf("%f",&number_in);
    clear_buffer();
    
    
    number_out = acos(number_in);
    number_out = number_out * 180.0 /M_PI;
    printf("\nThe cos inverse of %f is %f",number_in,number_out);
    printf("\nDo you want to continiue (y or n) :- ");
    scanf("%c",&proceed);
    clear_buffer();
    
    if (proceed == 'y' || proceed == 'Y'){
      printf("\nHappy to have you back\n");
      continue;
    }
    else{
      printf("Press enter to exit...");
      getchar();
      break;
    }
  } // while loop for aine function
  break;
  
case 6:
    while(1){
    printf("What is the tan inverse of: ");
    scanf("%f",&number_in);
    clear_buffer();
    

    number_out = atan(number_in);
    number_out = number_out * 180.0 /M_PI;
    printf("\nThe tan inverse of %f is %f",number_in,number_out);
    printf("\nDo you want to continiue (y or n) :- ");
    scanf("%c",&proceed);
    clear_buffer();
    
    if (proceed == 'y' || proceed == 'Y'){
      printf("\nHappy to have you back\n");
      continue;
    }
    else{
      printf("Press enter to exit...");
      getchar();
      break;
    }
  } // while loop for aine function
  break;
  }
}
