// Program to demonstrate the use of \xhh escape sequence

#include <stdio.h>

// main function
int main()
{
    // \xhh escape sequence
    // here hh is one or more hexadecimal digits
    // (0-9, a-f, A-F)
    char *s = "B\x4b";
    printf("%s\n", s);

    return 0;
}