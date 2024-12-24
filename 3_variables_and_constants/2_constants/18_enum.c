// Program to demonstrate use of enum to declare constant

#include <stdio.h>

// In C internally the default type of 'var' is int
enum VARS
{
    var = 42
};

// where mytype = int, char, long etc
// but can't be float, double or user defined data type
int main()
{
    printf("Value of var: %d\n", var);
    return 0;
}