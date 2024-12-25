#include <stdio.h>

// if you do not use the following command then 1_int_animals.c will
// be present in another translation unit and thus won't be accessible
#include "1_int_animals.c"

int main()
{
    printf("There are %d animals\n", animals);
    return 0;
}