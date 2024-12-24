// Program to demonstrate use of Macros in defining constants

// (not recommended to use macros for defining constants)

#include <stdio.h>

#define var 5
int main()
{
    printf("Value of var: %d\n", var);

#ifdef var
#undef var

// redefine var as 10
#define var 10
#endif

    printf("Value of var: %d\n", var);
    return 0;
}