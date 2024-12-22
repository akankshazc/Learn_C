// Program to demonstrate use of automatic variable

#include <stdio.h>

// function definition
void function()
{
    int x = 10; // local variable (also automatic)
    printf("Value of x (Local): %d\n", x);

    auto int y = 20; // automatic variable
    printf("Value of y (Automatic): %d\n", y);
}

// main function
int main()
{
    function();
    return 0;
}