// Program to demonstrate that the value of object
// pointed by a constant pointer can be changed
// but the pointer can not point to another variable

// constant pointer to variable usecase of const qualifier

#include <stdio.h>

// main function
int main()
{
    int i = 10;
    int j = 20;

    // constant pointer to integer
    int *const ptr = &i;

    printf("ptr: %d\n", *ptr);

    // changing the value of the object pointed by ptr
    *ptr = 20;

    printf("ptr: %d\n", *ptr);

    // changing the pointer to j
    // ptr = &j; // error: assignment of read-only variable ‘ptr’

    return 0;
}