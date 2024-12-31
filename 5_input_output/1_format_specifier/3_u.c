// Program to demonstrate use of %u format specifier

#include <stdio.h>

// main program
int main()
{
    unsigned int var;

    // take input
    printf("Enter an unsigned integer: ");
    scanf("%u", &var);

    // print the unsigned integer
    printf("You entered: %u\n", var);

    // trying to print signed value using %u
    printf("Signed value: %u\n", -1);

    return 0;
}