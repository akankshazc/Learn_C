// Program to implement conditonal statements with bool data type

#include <stdio.h>
#include <stdbool.h>

// main function
int main()
{
    // declaring integer variables
    int a = 3;
    int b = 4;

    // conditional statements
    if (a > b)
    {
        printf("a is greater than b\n");
    }
    else
    {
        printf("a is not greater than b\n");
    }

    printf("%d is the result of a > b\n", a > b);

    return 0;
}