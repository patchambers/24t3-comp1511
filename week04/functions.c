// functions.c
//
// Written by Pat Chambers (z5264081) on 30/9/24
//
// This program is a simple demonstration of functions

#include <stdio.h>

int add(int int_a, int int_b);

int main(void) {
    int result = 0;
    int num1 = 5;
    int num2 = 3;

    result = add(num1, num2);
    // result = 6 * add(3, 6) + add(4, num1);

    printf("Result: %d\n", result);
    // printf("Result: %d\n", add(num1, num2));
    return 0;
}

// Returns the sum of `int_a` and `int_b`
int add(int int_a, int int_b) {
    int add_result = int_a + int_b;
    return add_result;
}