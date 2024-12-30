// Program to demonstrate integer promotion

#include <stdio.h>

// main function
int main()
{
    char a = 0xfb;
    unsigned char b = 0xfb;

    printf("a = %c\n", a);
    printf("b = %c\n", b);

    // integer promotion results in a being a signed int (-5)
    // and b being an unsigned int (251)
    if (a == b)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }

    return 0;
}