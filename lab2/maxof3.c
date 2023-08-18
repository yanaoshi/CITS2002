#include <stdio.h>

int main(int argcount, char *argvalue[]){
        if (argcount < 2){
            fprintf("program expected more arguments, but instead received %d\n", argcount-1);
        } else {
            int max = 0;
            for(int i = 1; i < argcount; i++){
                if (atoi(argvalue[i]) > max){
                    max = atoi(argvalue[i]);
                }

                
            }
            printf("%d\n", max);
        }
}