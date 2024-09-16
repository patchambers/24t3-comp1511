// part1_variables
//
// This program was written by Pat Chambers (z5264081),
// on 16/9/24
//
// This program calculates the area of a circle

#include <stdio.h>

#define PI 3.14159265

int main(void) {

    // 1. Declare the variables
    double radius;
    
    // 2. Initalise the variables
	radius = 3.3;
    
    // 3. Calculate the area of the circle
    double area = radius * radius * PI;

    // 4. Print the result
    printf("The area of a circle with radius %lf is %lf\n", radius, area);

    return 0;
}
