#include <stdio.h>

#define SIZE 5

int main(void) {

    int array[SIZE] = {10, 20, 30, 40, 50};

    int i = 0;
    while (i < SIZE) {
        printf("%d\n", array[i]);
        i++;
    }

    return 0;
}