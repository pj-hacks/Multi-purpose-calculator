/*AUTHOR : JOSEPH PRINCE ANIEKEME
  DESCRIPTION :
  DATE : 16/12/2024
  TIME : 12:18pm
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

#define PI 3.142

void arithematic();
void logarithm();
void trigonometry();
void continuiety();



void clearbuffer(){
    int c;
    while((c = getchar()) != '\n' &&  c != EOF);
	}

void remove_newline(char *input){
    input[strcspn(input, "\n")] = '\0';
}


double squarenum;
float square, number;
int sum, subnum, selection, result;
int first = 1;
char agree;
char add[300], add2[200];
char sub[200], sub2[200];
char Div[200], Div2[200];
char mul[300], mul2[200];


int main(){
    
    printf("\nThis is an upgrade of my first calculator that had so many limitations, check the git repository");
    printf("\nSelect according to the number, not according to the words\n");
    printf("Enter n or N in any part of the calculator to exist the secsion\n");
    printf("1. ARITHEMATIC\t 2. LOGARITHM\t 3. TRIGONOMETRY\n");

    //taking the input of the user selected choice 
    scanf("%d",&selection);

    //clear buffer
    clearbuffer();

    do{
    switch(selection){
    case 1:
	printf("\nYou are working with arithematics\n");
	arithematic();
	break;
    case 2:
	printf("\nYou are working with logarithm\n");
	//logarithm();
	break;
    case 3:
	printf("\nYou are working with trigonometry\n");
	//trigonometry();
	break;
    default :
	printf("Out of range, select 1 through 3.\n");
	break;
    }

    printf("\nTrust you enjoyed our service\n");
    printf("Do you want to continue yes = y or no = n to stop :");
    scanf("%c",&agree);
    clearbuffer();

    if(agree == 'y' || agree == 'Y'){
	printf("\nWelcome back");
	printf("\nSelect according to the number, not according to the words:\n");
	printf("1. ARITHEMATIC\t 2. LOGARITHM\t 3. TRIGONOMETRY\n");
	printf("\ni will like to go with:");
	//taking the input of the user selected choice
	scanf("%d",&selection);  // thaking the user decision
	clearbuffer();//clear buffer
    }
    }while(agree == 'y' || agree == 'Y');
    
}  //This is the end of the main function


/** The function difinition section of the program, these are the functions used in the creation of this great program **/


void arithematic(){
    printf("\nWelcome to the arithematic section of this calculator\n");
    printf("This are the available features\n");
    printf("1. ADDITION\t 2. SUBTRACTION\t 3. MULTIPLICATION \n4. DIVISION\t 5. SQUARE\t 6. SQUARE ROOT \n7. FASTORIAL\n");
    printf("Enter: ");
    scanf("%d",&selection);
    clearbuffer();

    switch(selection){
    case 1:  //for addition
	while(1){
	    sum = 0;
	printf("Provide the numbers you want to add together (4+5+67+678+67) :");
	fgets(add, sizeof(add), stdin);
	remove_newline(add);
	strcpy(add2 ,add);
	const char * tokenadd = strtok(add, "+");
	 /* printf("%s\n",add; */
	while(tokenadd != NULL){
	    sum += atoi(tokenadd); // converting the strings from the token into numvers
	    tokenadd = strtok(NULL, "+");
	}

	printf("\n%s = %d\n", add2, sum);
	printf("\nDo you want to continue(y or n): ");
	scanf("%c",&agree);
	clearbuffer();
	if(agree == 'y' || agree == 'Y'){
	    continue;
	}
	else{
	    printf("\nLeaving the addition section\n");
	    break;}
	
	} // first while loop in the arithematic function
	break;  // End of the first case
	
    case 2:  // Subtracton
	while(1){
	    
	    result = 0 ;  // Reseting the result variable to 0, so there wont be any conflicting result for subsequent operations
	    first = 1 ;  // Reseting the first number extracter to one in other to handle subsequent operations
	    memset(sub, 0, sizeof(sub)); //  Clearing the memory of sub in other to avoid any conflicting memory
	    memset(sub2, 0, sizeof(sub2));  //  Clearing the memory of sub2 in other to avoid any conflicting memory
	    
	printf("Provide the numbers you want to add together (4-5-67-678-67) :");
	fgets(sub, sizeof(sub), stdin);  
	remove_newline(sub);  // Removing the remaining trash in the memory
	strcpy(sub2 ,sub);  // Copying sub into sub2
	const char * tokensub = strtok(sub, "-");  // Saperating the the string in sub into sections because of the delimeter 
	 /* printf("%s\n",add); */
	while(tokensub != NULL){
	    if(first){  // this must always be true when ever the program runs
		result = atoi(tokensub);
		first = 0;
	    }
	    else{
	    subnum = atoi(tokensub); // converting the strings from the token into numvers
	    result -= subnum;
	    }
	    tokensub = strtok(NULL, "-");
	}
	
	printf("\n%s = %d\n", sub2, result);  // Printing the sub value
	
	printf("\nDo you want to continue(y or n): ");
	scanf("%c",&agree);
	clearbuffer();
	if(agree == 'y' || agree == 'Y'){
	    continue;
	}
	else{
	    printf("\nLeaving the subtraction section\n");
	    break;}
	
	} // second while loop in the arithematic function
	break;  //end of the second cade
	
    case 3:  // FOR MULTIPLICATION
	while(1){  // for the third while loop 
	sum = 1;
	memset(mul, 0, sizeof(mul));
	memset(mul2, 0, sizeof(mul2));
	printf("Provide the numbers you want to add together (4+5+67+678+67) :");
	fgets(mul, sizeof(mul), stdin);
	remove_newline(mul);
	strcpy(mul2 ,mul);
	const char * tokenmul = strtok(mul, "*");
	 /* printf("%s\n",add); */
	while(tokenmul != NULL){
	    sum *= atoi(tokenmul); // converting the strings from the token into numvers
	    tokenmul = strtok(NULL, "*");
	}

	printf("\n%s = %d\n", mul2, sum);
	printf("\nDo you want to continue(y or n): ");
	scanf("%c",&agree);
	clearbuffer();
	if(agree == 'y' || agree == 'Y'){
	    continue;
	}
	else{
	    printf("\nLeaving the addition section\n");
	    break;}
	
	} // first while loop in the arithematic function
	break; // End of the third case

     case 4:
	while(1){  // for the third while loop
	    
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
	while(tokenDiv != NULL){
	    if(first){
		number = atoi(tokenDiv);
		if(number == 0){
		    break;
		}
		first = 0;
	    }
	    else{
	    sum = atoi(tokenDiv); // converting the strings from the token into numvera
	    number /= sum;
	    }
	     tokenDiv = strtok(NULL, "/");
	}

	printf("\n%s = %f\n", Div2, number);
	printf("\nDo you want to continue(y or n): ");
	scanf("%c",&agree);
	clearbuffer();
	if(agree == 'y' || agree == 'Y'){
	    continue;
	}
	else{
	    printf("\nLeaving the addition section\n");
	    break;}
	
	} // first while loop in the arithematic function
	break; // End of the fourth case

    case 5:
	while(1){
	printf("\nWorking on square operation.\nRemeber on like other section of this calculator thet works with so many operators this section need only one number like this (47755). You dont need the square sign for anythinf here.\n");
	printf("Enter number: ");
	scanf("%lf",&squarenum);
	clearbuffer();

	square = pow(squarenum, squarenum);

	printf("The square of %lf is %f \n", squarenum , square);

	printf("\nDo you want to continue(y or n): ");
	scanf("%c",&agree);
	clearbuffer();
	if(agree == 'y' || agree == 'Y'){
	    continue;
	}
	else{
	    printf("\nLeaving the addition section\n");
	    break;}
	
	} // first while loop in the arithematic function
	break; // End of the fourth case

	
    } // first switch statement in the arithematic function
}
