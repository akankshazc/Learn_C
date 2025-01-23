// Program to demonstrate the use of %p format specifier

#include <stdio.h>

int main()
{
    int a = 10;
    printf("The Memory address of a is: %p\n", (void *)&a);
    return 0;
}