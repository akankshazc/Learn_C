// Program to demonstrate the pointer to constant usecase of const qualifier

#include <stdio.h>

// main function
int main()
{
    // i is stored in read-only area
    int const i = 10;
    int j = 20;

    // pointer to integer constant
    int const *ptr = &i;

    printf("ptr: %d\n", *ptr);

    // *ptr = 20; // error: assignment of read-only location ‘*ptr’

    // changing the pointer to j
    ptr = &j;

    printf("ptr: %d\n", *ptr);

    return 0;
}