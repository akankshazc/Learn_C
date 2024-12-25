// Program to demonstrate global scope

#include <stdio.h>

// global variable
int global_var = 10;

// global var accessed from within a function
void func()
{
    printf("Value of global_var: %d\n", global_var);
}

// global var accessed from within main()
int main()
{
    printf("Before change within main: ");
    func();

    // changing the value of global_var
    global_var = 20;
    printf("After change within main: ");
    func();

    return 0;
}