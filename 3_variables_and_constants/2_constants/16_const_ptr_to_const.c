// Program to demonstrate value pointed by the pointer
// can not be changed as well as we cannot point the pointer to other variables

#include <stdio.h>

int main()
{
    int i = 10;
    int j = 20;

    // constant pointer to constant integer
    const int *const ptr = &i;

    printf("Value of ptr: %d\n", *ptr);

    // Error: assignment of read-only location
    // *ptr = 20;
    // ptr = &j;
}