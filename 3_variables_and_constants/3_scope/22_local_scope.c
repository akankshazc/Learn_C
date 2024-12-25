// Program to illustrate local scope of variables

#include <stdio.h>

// main function
int main()
{
    {
        int x = 10, y = 20;
        {
            printf("x = %d, y = %d\n", x, y);
            {
                // y is declared again
                // so outer block y isn't accessible
                int y = 30;

                // changes the outer block x
                x++;

                // changes this block's y
                y++;

                printf("x = %d, y = %d\n", x, y);
            }

            // this statement accesses only outer block x and y
            printf("x = %d, y = %d\n", x, y);
        }
    }

    return 0;
}