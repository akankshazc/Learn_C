// Program to declare and print a local variable inside a function

#include <stdio.h>

// function definition
void function()
{
    int x = 10; // local variable
    printf("Value of x inside function: %d\n", x);
}

// main function
int main()
{
    function();
    return 0;
}