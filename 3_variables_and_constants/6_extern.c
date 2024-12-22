// Program to demonstrate the use of external variable

#include "6_extern.h"
#include <stdio.h>

void print_value()
{
    printf("Global external variable: %d\n", x);
}

int main()
{
    print_value();
    return 0;
}