#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(int argcount, char *argvalue[]){
    if (argcount != 2){
        printf("Please enter credit card number.");
        return 1;
    }
    int evens = 0;
    int odds = 0;

    int countofcarddigits = strlen(argvalue[1]);
    for(int i = countofcarddigits  - 1; i >= 0; i--){
        int currentDigit = argvalue[1][i] - '0';

        if (i % 2 == 0){
            int newDigit = currentDigit * 2;
            if (newDigit > 9){
                newDigit = (newDigit % 10) + (newDigit / 10);
            }
            evens += newDigit;
            }
        else {
            odds += currentDigit;
            }
        } 
        
        
    if ((evens + odds) % 10 == 0){
        printf("Your given argument is a valid credit card number.");
    }
    else {
        printf("Your given argument is an invalid credit card number.");
    }
    return 0;
}  


