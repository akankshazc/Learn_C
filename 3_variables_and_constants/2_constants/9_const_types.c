// Program to demonstrate the different types of constants

#include <stdio.h>

// main function
int main()
{
    // integer constant
    const int int_const = 10;
    printf("Value of integer constant: %d\n", int_const);

    // character constant
    const char char_const = 'A';
    printf("Value of character constant: %c\n", char_const);

    // floating-point constant
    const float float_const = 10.5;
    printf("Value of floating-point constant: %f\n", float_const);

    // string constant
    const char *string_const = "Hello, World!";
    printf("Value of string constant: %s\n", string_const);
}