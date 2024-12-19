// Program to demonstrate the use of the auto keyword

#include <stdio.h>

int printvalue()
{
    auto int a = 10;
    printf("The value of a is %d\n", a);
}

// Main function: entry point for execution (Driver code)
int main()
{
    printvalue();
    return 0;
}