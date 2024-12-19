// Program to demonstrate enum keyword

#include <stdio.h>

// enum declaration:
enum week
{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main()
{
    // object of the enum (week), called today
    enum week today;
    today = Wednesday;
    printf("Day %d\n", today + 1);
    return 0;
}