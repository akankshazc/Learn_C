#include <stdio.h>

// variable with internal linkage
static int animals = 8;

// funciton with external linkage
void printAnimals()
{
    printf("There are %d animals\n", animals);
}