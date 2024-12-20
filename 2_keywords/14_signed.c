// Program to demonstrate short, long, signed, unsigned keyword

#include <stdio.h>

// main function
int main()
{
    // short integer
    short int si = 12345;

    // long integer
    long int li = 1234567L;

    // signed integer
    signed int s = -123;

    // unsigned integer
    unsigned int u = 123;

    printf("The value of short int is %d\n", si);
    printf("The value of long int is %ld\n", li);
    printf("The value of signed int is %d\n", s);
    printf("The value of unsigned int is %u\n", u);
    return 0;
}