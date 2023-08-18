#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool isSafe(const char *string){
    int countUpper = 0;
    int countLower = 0;
    int countDigit = 0;
    int stringlength = strlen(string);
    for(int i = 0; i < stringlength; i++){
        char letter = string[i];
        if (isdigit(letter)){
            countDigit++;
        } else if (isupper(letter)){
            countUpper++;
        } else if (islower(letter)){
            countLower++;
        }
        
    }
    return (countUpper >= 2 && countLower >= 2 && countDigit >= 2);
    
}

int main(int argcount, char *argvalue[]){
    for(int i = 1; i < argcount; i++){
        if(isSafe(argvalue[i])){
            printf("The password %s is safe\n", argvalue[i]);
        } else {
            printf("The password %s is not safe\n", argvalue[i]);
        }
    }
}