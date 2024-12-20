// Program to demonstrate union keyword

#include <stdio.h>

// Defining a union
union student
{
    int age;
    char marks;
} s;

// main function
int main()
{
    // Assigning values to age and marks
    s.age = 20;
    s.marks = 74;

    // Printing age and marks
    printf("Age: %d\n", s.age);
    printf("Marks: %d\n", s.marks);
}