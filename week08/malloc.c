// Using malloc and free to manually manage memory
// Pat Chambers (z5264081), 2/4/24

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 10

struct my_struct {
    int number;
    char letter;
    double another_number;
};

int main(void) {

    // malloc memory for int: 
    int *num = malloc(sizeof(int));

    // malloc memory for array of 10 chars:
    char *string = malloc(sizeof(char) * SIZE);
    strcpy(string, "data");
    printf("%s\n", string);
    
    // malloc memory for a `struct my_struct`:
    struct my_struct *a_struct = malloc(sizeof(struct my_struct));

    // malloc memory for array of 10 `struct my_struct`s
    struct my_struct *my_struct_array = malloc(sizeof(struct my_struct) * SIZE);

    // Use `free` to deallocate memory
    // You can use `dcc --leak-check ...` to check for memory leaks
    free(num);
    free(string);
    free(a_struct);
    free(my_struct_array);

    return 0;
}
