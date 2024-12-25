// Program to illustrate the scope of a variable

#include <stdio.h>

int main()
{
    // scope of this variable is within main() only
    int var = 10;

    printf("Value of var: %d\n", var);
}

// function where we try to access the var defined in main()
void func()
{
    // Error: 'var' undeclared (first use in this function)
    // printf("Value of var: %d\n", var);
}