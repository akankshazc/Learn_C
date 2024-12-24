// Program to show down qualification of a pointer to constant

#include <stdio.h>

// main function
int main()
{
    int i = 10;
    int const j = 20;

    // ptr is pointer to integer object
    int *ptr = &i;

    printf("ptr: %d\n", *ptr);

    // changing the pointer to j
    // compiler *may* throw a warning but casting is implicity allowed
    ptr = &j;

    printf("ptr: %d\n", *ptr);

    return 0;
}