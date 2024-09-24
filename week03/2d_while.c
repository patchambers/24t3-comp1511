// 2d_while.c
// Pat Chambers (z5264081), 24/9/24
// Basic demo of using nested loops to print a grid

#include <stdio.h>

#define MAX 4

int main(void) {

    int row = 0;
    while (row < MAX) {
        
        int col = 0;
        while (col < MAX) {
            // Print 'O' for every column in row 2, print 'X's everywhere else
            if (row == 2) {
                printf("O");
            } else {
                printf("X");
            }
            col++;
        }

        printf("\n");
        row++;
    }

    return 0;
}