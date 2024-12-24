// Program to demonstrate Pointer to constant usecase of const qualifier

#include <stdio.h>

// main function
int main()
{
    int i = 10;
    int j = 20;

    // ptr is pointer to constant
    const int *ptr = &i;

    printf("ptr: %d\n", *ptr);

    // using the pointer ptr
    // *ptr = 20; // error: assignment of read-only location ‘*ptr’

    // changing the pointer to j
    ptr = &j;

    printf("ptr: %d\n", *ptr);

    return 0;
}