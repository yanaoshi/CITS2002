#include <stdio.h>
#include <stdlib.h>




int my_strlen(const char *string){
    int length = 0;
    while (string[length] != '\0'){
        length++;
    }
    return length;
}

int main(int argcount, char *argvalue[]){
    for(int i = 1; i < argcount; i++){
        printf("The length of string %s is %d\n", argvalue[i], my_strlen(argvalue[i]));

}
}