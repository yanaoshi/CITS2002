#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

// Compile this program with:
//    cc -std=c11 -Wall -Werror -o rotate rotate.c

//  The rotate function returns the character ROT positions further along the
//  alphabetic character sequence from c, or c if c is not lower-case

char rotate(char c, int number)
{
    // Check if c is lower-case or not
    if(islower(c)) {
        // The ciphered character is ROT positions beyond c,
        // allowing for wrap-around
        return ('a' + (c - 'a' + number) % 26);
    }
    // Check if c is upper-case or not
    else if (isupper(c)) {
        // The ciphered character is ROT positions beyond c,
        // allowing for wrap-around
        return ('A' + (c - 'A' + number) % 26);
    }
    // If c is neither upper-case nor lower-case, return c
    else {
        return c;
    }
}
 
bool canConvertToInt(const char *inputStr) {
    char *endPtr;
    strtol(inputStr, &endPtr, 10);
    return *endPtr == '\0';
}

//  Execution of the whole program begins at the main function

int main(int argcount, char *argvalue[])
{
 
    
    // Exit with an error if the number of arguments (including
    // the name of the executable) is not precisely 2
    if(argcount < 2) {
        fprintf(stderr, "%s: program expected at least 2 arguments, but instead received %d\n",
                    argvalue[0], argcount-1);
        exit(EXIT_FAILURE);
    } 
    else {
        // get the number of rotations from the first argument
        int rot = 13;

        // determine the length of each argument to be rotated
        for (int arg = 1; arg < argcount; arg++){
            int length = strlen(argvalue[arg]);
            if(canConvertToInt(argvalue[arg])) {
                rot = atoi(argvalue[arg]);
            }
            else {
        
        // Loop for every character in the text
                for(int i = 0; i < length; i++) {
                    // Determine and print the ciphered character
                    printf("%c\t%c\t%i\n", rotate(argvalue[arg][i], rot), argvalue[arg][i], i);
                }
            }
        // Print one final new-line character
        printf("\n");
        }
        // Exit indicating success
        exit(EXIT_SUCCESS);
    }
    return 0;
}