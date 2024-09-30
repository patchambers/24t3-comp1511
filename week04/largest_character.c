#include <stdio.h>

#define SIZE 8

int main(void) {

    char array[SIZE] = {'a', 'b', 'c', 'd', 'g', 'f', 'e', 'd'};

    char largest_character = array[0];    
    int i = 0;
    while (i < SIZE) {
        if (largest_character < array[i]) {
            largest_character = array[i];
        }
        i++;
    }

    printf("%c\n", largest_character);


    return 0;
}