// Program to display "Hello, World!"

// Header file for input output functions
#include <stdio.h>

// Main function: entry point for execution
int main()
{
    // the print statement
    printf("Hello, World!\n");

    /*
    Other ways to write a "Hello, World!" program:
    */

    // Using puts() function
    puts("Hello, World!");

    // Using write() system call
    // Generates a warning (less portable and more advanced)
    write(1, "Hello, World!\n", 14);

    // Using putchar() function
    char *str = "Hello, World!\n";
    while (*str)
    {
        putchar(*str++);
    }

    return 0;
}
