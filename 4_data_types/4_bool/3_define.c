// Program to implement boolean data type using #define

#define bool int
#define true 1
#define false 0

#include <stdio.h>

// main function
int main()
{
    // declare boolean variables
    bool a = true;
    bool b = false;

    // print the values of a and b as integers
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}