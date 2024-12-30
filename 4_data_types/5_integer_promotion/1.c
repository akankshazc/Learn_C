// Program to demonstrate integer promotion

#include <stdio.h>

// main function
int main()
{
    char a = 30, b = 40, c = 10;

    // (a * b) is promoted to int
    // so there is no arithmetic overflow
    char d = (a * b) / c;

    printf("Value of d: %d\n", d);

    return 0;
}