// Program to demonstrate const keyword

#include <stdio.h>

int main()
{
    const int a = 11;
    // a = 12; // Error: assignment of read-only variable 'a'

    printf("The value of a is %d\n", a);
    return 0;
}