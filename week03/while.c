// while.c
// Pat Chambers (z5264081), 24/9/24
// Demo printing repeatedly with a while loop

#include <stdio.h>

#define MAX 10

int main(void) {

    int i = 0;
    while (i <= MAX) {
        // Print the value of i
        printf("%d\n", i);
        // i = i + 1;
        // i += 1;
        i++;
    }

    return 0;
}