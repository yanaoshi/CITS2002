#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>


void replace( char oldword[], char newword[], char whole_sentence[] ){
    char *position = strstr(whole_sentence, oldword);

    while(position != NULL){
    // Calculate the lengths of the strings
        size_t mainLength = strlen(whole_sentence);
        size_t searchLength = strlen(oldword);
        size_t replaceLength = strlen(newword);

        // Calculate the remaining length after the search position
        size_t remainingLength = mainLength - (position - whole_sentence + searchLength);

        // Shift the remaining part of the string to make space for the replace string
        memmove(position + replaceLength, position + searchLength, remainingLength + 1);

        // Copy the replace string to the search position
        memcpy(position, newword, replaceLength);

        // Find the next occurrence
        position = strstr(position + replaceLength, oldword);
    }
}

int main(int argcount, char *argvalue[]){
    if(argcount != 4){
        printf("Usage: %s <oldword> <newword> <sentence>\n", argvalue[0]);
        return 1;
    }
    else{
        char *oldword = argvalue[1];
        char *newword = argvalue[2];
        char *sentence = argvalue[3];

        replace(oldword, newword, sentence);

        printf("%s\n", sentence);
    }
}