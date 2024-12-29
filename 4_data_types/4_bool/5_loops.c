// Program to demonstrate use of bool data type in loops

#include <stdio.h>
#include <stdbool.h>

// main function
int main()
{
    // boolean declared
    bool a = true;
    int i = 0;

    // while loop
    while (a)
    {
        printf("i is %d\n", i);
        i++;

        // Conditional statement returning
        // true or false
        // Breaking point of loop
        if (i > 5)
        {
            a = false;
        }
    }

    return 0;
}