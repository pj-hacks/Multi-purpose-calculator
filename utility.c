#include <stdio.h>
#include "utility.h"

void clear_buffer(){
    int c;
    while((c = getchar()) != '\n' &&  c != EOF);
	}
	
	
void remove_newline(char *input){
    input[strcspn(input, "\n")] = '\0';
}