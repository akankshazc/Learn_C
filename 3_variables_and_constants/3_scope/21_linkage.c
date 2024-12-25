// Main file to demonstrate external linkage of global variables

#include <stdio.h>
#include "21_file.c"

// declare the external variable and function
extern int global_var;
void func();

// main function
int main()
{
    // initialize the global variable
    global_var = 10;

    // call the function
    func();

    return 0;
}