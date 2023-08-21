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

int findMaximum(int *array, int size){
    int maximum = array[0];
    int maxIndex = 0;
    for(int i = 0; i < size; i++){
        if(maximum < array[i]){
            maximum = array[i];
            maxIndex = i;
        }
    }
    for(int i = maxIndex; i > 0; i--){
        array[i] = array[i - 1];
    }
     // Place the maximum value at the first position
    array[0] = maximum;


    return maximum;
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
        
        printf("Original array:\n");
        for(int i = 0; i < 10; i++){
            printf("%d\n", array[i]);
        }
       
    
        printf("The maximum value is %d\n", findMaximum(array, 10));
        

        printf("Array after moving maximum to the front:\n");
        for(int i = 0; i < 10; i++){
            printf("%d\n", array[i]);
        }

    }
    return 0;

}