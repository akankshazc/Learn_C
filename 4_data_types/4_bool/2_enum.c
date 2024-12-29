// Program to implement boolean data types using Enumeration

#include <stdio.h>

// Enumeration to define boolean data type
typedef enum
{
    false,
    true
} bool;

// Main function
int main()
{
    // Defining two boolean variables
    bool a = true;
    bool b = false;

    // Printing the values of a and b as integers
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}