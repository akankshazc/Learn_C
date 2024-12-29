// Program to demonstrate using bool as function return type

#include <stdio.h>
#include <stdbool.h>

// function returning bool value
bool isEven(int n)
{
    return (n % 2 == 0);
}

// main function
int main()
{
    // declare integer variable
    int n = 10;

    // function call
    if (isEven(n))
    {
        printf("%d is Even\n", n);
    }
    else
    {
        printf("%d is Odd\n", n);
    }

    return 0;
}