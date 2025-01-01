// Program to demonstrate use of %f format specifier

#include <stdio.h>

// main program
int main()
{
    float a = 12.56;

    // printing float variable using %f format specifier
    printf("Value of a (using %%f) = %f\n", a);

    // printing float variable using %e format specifier
    printf("Value of a (using %%e) = %e\n", a);

    // printing float variable using %E format specifier
    printf("Value of a (using %%E) = %E\n", a);

    return 0;
}