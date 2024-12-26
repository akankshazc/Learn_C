// Program to print character data type

#include <stdio.h>

// main function
int main()
{
    char a = 'a';
    char c;

    printf("Value of a: %c\n", a);

    a++;
    printf("Value of a after increment: %c\n", a);

    // c is assigned ASCII value corresponding to character 'c'
    c = 99;

    printf("Value of c: %c\n", c);

    return 0;
}