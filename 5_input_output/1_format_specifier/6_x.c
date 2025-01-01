// Program to demonstrate the use of %x format specifier

#include <stdio.h>

// main function
int main()
{
    int a = 15454;

    // %x is used to print the hexadecimal value of a
    printf("Value of a (using %%x) = %x\n", a);

    // using %X will print the hexadecimal value in uppercase
    printf("Value of a (using %%X) = %X\n", a);

    return 0;
}