// Program to demonstrate use of %d  and %i format specifier

#include <stdio.h>

// main function
int main()
{
    int x;

    // input integer
    printf("Enter an integer: ");
    scanf("%d", &x);

    // output integer
    printf("You entered (printed using %%d): %d\n", x);
    printf("You entered (printed using %%i): %i\n", x);

    return 0;
}