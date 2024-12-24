// Program to demonstrate a constant variable

#include <stdio.h>

// main function
int main()
{
    // variable
    int not_const;

    // constant variable
    const int const_var = 10;

    // assignment (changing values)
    not_const = 20;
    // const_var = 20; // error: assignment of read-only variable 'const_var'

    printf("Value of not_const: %d\n", not_const);
    printf("Value of const_var: %d\n", const_var);

    return 0;
}