// File to demonstrate external linkage of global variables

#include <stdio.h>

// define global variable
int global_var;

// define the function to use the global variable
void func()
{
    printf("Value of global_var: %d\n", global_var);
}