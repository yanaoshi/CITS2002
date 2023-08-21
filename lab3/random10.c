#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>

// Write a simple program to fill an array of 10 integers with random numbers from rand() function.
void fillArray(int *array, int size){
    int i;
    for(i = 0; i < size; i++){
        array[i] = rand() % 100;
    }
}


int main(int argcount, char *argvalue[]){ 
    if (argcount != 1){
        printf("Usage: %s\n", argvalue[0]);
        return 1;
    }
    else{
        int array[10];
        srand(time(NULL)); // seed the random number generator
        fillArray(array, 10);
        int maximum = array[0]; // the program will return the maximum value in the array
        for(int i = 0; i < 10; i++){
            printf("%d\n", array[i]);
            if(maximum < array[i]){ 
                maximum = array[i];
            }
        }
        printf("Maximum: %d\n", maximum);
        return 0;
    

}
}