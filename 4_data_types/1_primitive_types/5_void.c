// Program to demonstrate use of void pointers

#include <stdio.h>

// main function
int main()
{
    int val = 30;
    void *ptr = &val;
    printf("Value of val: %d\n", *(int *)ptr);

    return 0;
}