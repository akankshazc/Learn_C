// Program to demonstrate character arithmetic

#include <stdio.h>

// main function
int main()
{
    char ch1 = 125, ch2 = 10;
    ch1 = ch1 + ch2;

    // %d shows the ASCII value of the character
    printf("ch1 = %d\n", ch1);

    // %c shows the character
    printf("ch1 = %c\n", ch1 - ch2 - 4);

    return 0;
}