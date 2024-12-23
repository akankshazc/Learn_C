// Program to demonstrate the declaration, definition and initialization of a variable

#include <stdio.h>

// main function
int main()
{
    // declaration with definition
    int defined_var;

    printf("Value of defined_var: %d\n", defined_var);

    // assignment
    defined_var = 10;

    printf("Value of defined_var after assignment: %d\n", defined_var);

    // declaration with definition and initialization
    int initialized_var = 20;

    printf("Value of initialized_var: %d\n", initialized_var);

    return 0;
}