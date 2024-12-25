#include <stdio.h>

// Telling compiler that the variable have external linkage
extern int animals;

int main()
{
    printf("There are %d animals\n", animals);
    return 0;
}