// Program to demonstrate character arithmetic

#include <stdio.h>

// main function
int main()
{
    char value1 = 'a';
    char value2 = 'b';
    char value3 = 'z';

    // character arithmetic
    char num1 = value1 + 3;
    char num2 = value2 - 1;
    char num3 = value3 - 2;

    // print the result as character
    printf("num1 = %c\n", num1);
    printf("num2 = %c\n", num2);
    printf("num3 = %c\n", num3);

    // print the result as integer
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);
    printf("num3 = %d\n", num3);

    return 0;
}