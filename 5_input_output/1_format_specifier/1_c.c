// Program to demonstrate the %c format specifier

#include <stdio.h>

// main function
int main()
{
    char ch;

    // print prompt first
    printf("Enter some character: ");

    // now read the character
    scanf("%c", &ch);

    // print the character with newline for better formatting
    printf("\nYou entered: %c\n", ch);

    return 0;
}