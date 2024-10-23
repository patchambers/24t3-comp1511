// Demonstrates use of pointers in functions
// Pat Chambers (z5264081), 23/10/24

#include <stdio.h>

void change_pointer_and_value(int *ptr);

int main(void) {

    int num = 0;
    int *ptr = &num;

    printf("num before function: %d\n", num);
    printf("ptr before function: %p\n", ptr);

    change_pointer_and_value(ptr);

    printf("num after function: %d\n", num);
    printf("ptr after function: %p\n", ptr);

    return 0;
}


// Change the value of `num` using `ptr`. We also try to change `ptr` in this 
// function. 
void change_pointer_and_value(int *ptr) {
    // This changes `num` by going to its address, which is stored in `ptr`
    *ptr = 42;
    printf("num inside function: %d\n", *ptr);

    // This changes `ptr` in the function, but not in main
    ptr = NULL;
    printf("ptr inside function: %p\n", ptr);

}