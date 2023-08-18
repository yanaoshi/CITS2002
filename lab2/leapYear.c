#include <stdlib.h>
#include <stdio.h>

//  Determine the numerical value of the program's 1st command-line argument
    int main(int argc, char *argv[]) {
        if (argc != 2) {
            fprintf(stderr, "Usage: %s <number>\n", argv[0]);
            exit(EXIT_FAILURE);
        }
        int value = atoi( argv[1] );

        if((value % 400 == 0) || (value % 4 == 0 && value % 100 != 0)){
            printf("%d is a leap year\n", value);
        } else {
            printf("%d is not a leap year\n", value);
        }
    }