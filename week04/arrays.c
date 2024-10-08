// part1_arrays.c, odd_only
//
// Written by Pat Chambers (z5264081) on 30/9/24
//
// This program adds 1 to any even element in an array and after prints 
// all elements in the array

#include <stdio.h>

#define SIZE 5

int main(void) {

    int array[SIZE] = {1, 2, 3, 4, 5};

    int i = 0;
    while (i < SIZE) {
        if (array[i] % 2 == 0) {
            array[i] += 1;
        }
        i++;
    }
    int j = 0;
    while (j < SIZE) {
        printf("%d ", array[j]);
        j++;
    }

    printf("\n");

    return 0;
}
