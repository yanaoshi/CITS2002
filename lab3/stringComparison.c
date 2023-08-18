#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_strcmp(const char *string, const char *string2){
    int string1Length = strlen(string);
    int string2Length = strlen(string2);
    
    for(int i = 0; i < string1Length; i++){ 
        if(string[i] > string2[i]){
            return 1;
        } 
        else if (string[i] < string2[i]){
            return -1;
        }
    }
    if(string1Length == string2Length){
        return 0;
    }
    else if (string1Length > string2Length)
    {
        return 1;
    }
    else if(string1Length < string2Length){
        return -1;
    }

}
int main (int argcount, char *argvalue[]){
    printf("%d\n", my_strcmp(argvalue[1], argvalue[2]));
    return 0;
}