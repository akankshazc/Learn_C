#include <stdio.h>

// Telling compiler that the function has external linkage
extern void printAnimals();

int main()
{
    printAnimals();
    return 0;
}