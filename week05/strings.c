// part3_simple_string.c
//
// This program was written by Sofia De Bellis (z5418801)
// on March 2024
//
// This program demonstrates how to work with strings in C.

#include <stdio.h>

#define MAX_SIZE 1024

int main(void) {
    // Declare and initialise a string "Hello World!"
    char my_string[] = "Hello world!";
    
    // Traverse the string and print each character
    int i = 0;
    while (my_string[i] != '\0') {
        printf("%c", my_string[i]);
        i++;
    }
    printf("\n");


    // How to print a string in its entirety
    printf("%s\n", my_string);

    // Declare a string
    char new[MAX_SIZE];
    
    // Read a string from the user, note we DO NOT use scanf for strings
    printf("Enter a string: ");
    fgets(new, MAX_SIZE, stdin);
    printf("Scanned with fgets: %s", new);
    
    return 0;
}