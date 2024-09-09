// Prints a different face, dealing with backslash difficulties
// Written by Pat Chambers (z5264081)
// on 9/9/24

#include <stdio.h>

int main(void) {

    printf("Face 2:\n");
    printf("~ ~\n");
    printf("0 0\n");
    printf(" o \n");
    printf("\\_/n");
    // We have to use '\\' to print a single '\', so the compiler knows it's 
    // not trying to print a special character 

    return 0;
}