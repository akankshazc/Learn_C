// Program to demonstrate use of static variable

#include <stdio.h>

// function definition
void function()
{
    int x = 20;        // local variable
    static int y = 20; // static variable
    x++;
    y++;
    printf("\tValue of Local x: %d\n\tAnd Static y: %d\n", x, y);
}

// main function
int main()
{
    printf("First call to function:\n");
    function();

    printf("Second call to function:\n");
    function();

    printf("Third call to function:\n");
    function();

    return 0;
}