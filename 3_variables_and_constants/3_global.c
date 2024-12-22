// Program to demonstrate use of global variable

#include <stdio.h>

// global variable
int x = 10;

// function definition
void function1()
{
    printf("Value of x inside function 1: %d\n", x);
}

// function definition
void function2()
{
    printf("Value of x inside function 2: %d\n", x);
}

// main function
int main()
{
    printf("Value of x inside main: %d\n", x);
    function1();
    function2();
    return 0;
}