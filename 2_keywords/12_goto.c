// Program to demonstrate goto keyword

#include <stdio.h>

// Function to print numbers from 1 to 10

void printNumbers()
{
    int n = 1;

label:
    printf("%d\n", n);
    n++;
    if (n <= 10)
        goto label;
}

// main function
int main()
{
    printNumbers();
    return 0;
}