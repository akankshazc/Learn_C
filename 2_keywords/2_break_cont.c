// Program to show use of break and continue keywords

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        // Continue the loop if i is 2
        if (i == 2)
        {
            continue;
        }

        // Break the loop if i is 6
        if (i == 6)
        {
            break;
        }

        // Print the value of i
        printf("%d ", i);
    }
    return 0;
}