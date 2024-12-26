// program to print size of different data types in C

#include <stdio.h>

// main function
int main()
{
    int size_of_int = sizeof(int);
    int size_of_char = sizeof(char);
    int size_of_float = sizeof(float);
    int size_of_double = sizeof(double);

    printf("Size of int: %d bytes\n", size_of_int);
    printf("Size of char: %d bytes\n", size_of_char);
    printf("Size of float: %d bytes\n", size_of_float);
    printf("Size of double: %d bytes\n", size_of_double);

    return 0;
}