#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int n = get_int("Chose the size of the pyramid " );
    if (n<1 || n>8);
    {
        printf("The size must be between 1 and 8\n");
        int n = get_int("Chose the size of the pyramid " );
    }
}
