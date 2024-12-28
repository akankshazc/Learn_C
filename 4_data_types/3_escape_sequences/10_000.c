// Program to demonstrate the \000 escape sequence

#include <stdio.h>

// main function
int main()
{
    // \000 is an octal escape sequence
    // it is used to represent a character by its octal value
    // where each 0 in it is one to three octal digits

    char *s = "A\072\065";
    // \072 is the octal value of : and \065 is the octal value of 5
    printf("%s\n", s);

    return 0;
}