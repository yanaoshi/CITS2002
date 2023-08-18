#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>




bool isPalindrome(const char *string){
    int stringlength = strlen(string);
    for(int i = 0; i < stringlength; i++){
        char letter = string[i];
        char letter2 = string[stringlength - i - 1];
        if (letter != letter2){
            return false;
        }
    }
    return true;

}



int main(int argcount, char *argvalue[]){
    for(int i = 1; i < argcount; i++){
        if(isPalindrome(argvalue[i])){
            printf("The string %s is a palindrome\n", argvalue[i]);
        } else {
            printf("The string %s is not a palindrome\n", argvalue[i]);
        }
    }
}