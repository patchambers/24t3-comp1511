// scan_loops.c
//
// Written by Pat Chambers (z5264081), 24/9/24
//
// Some demos on scanning in loops

#include <stdio.h>

int main(void) {
    // Scan input until a negative number is entered, then print the sum of all 
    // scanned numbers

    int sum = 0;

    int input;
    scanf("%d", &input);

    while (input >= 0) {
        sum = sum + input;
        scanf("%d", &input);
    }

    printf("Sum of inputs: %d\n", sum);

    return 0;
}

