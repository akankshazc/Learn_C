// Program to show input and output of basic data types

#include <stdio.h>

// main function
int main()
{
    // declaring variables
    int num;
    char ch;
    float f;

    // -- Integer Input --
    printf("Enter an integer: ");
    scanf("%d", &num); // taking integer input

    // Output the integer
    printf("Integer: %d\n", num);

    // -- Character Input --
    printf("Enter a character: ");
    scanf(" %c", &ch); // taking character input

    // Output the character
    printf("Character: %c\n", ch);

    // -- Float Input --
    printf("Enter a float: ");
    scanf("%f", &f); // taking float input

    // Output the float
    printf("Float: %f\n", f);

    return 0;
}