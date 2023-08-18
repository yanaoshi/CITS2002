#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(int argcount, char *argvalue[]){
    for(int i = 1; i < argcount; i++){
        int number = atoi(argvalue[i]);
        if (number % 10 == 1){
            printf("%ist\n", number);
        } else if (number % 10 == 2)
        {
            printf("%ind\n", number);
        } else if (number % 10 == 3)
        {
            printf("%ird\n", number);
        } else {
            printf("%ith\n", number);
        }
        
        
    }
}