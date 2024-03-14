#include <stdio.h>
#include <cs50.h>

int main (void)
{
   do
    {
        int n = get_int("Chose the size of the pyramid " );
        printf("The size must be between 1 and 8\n");
    }
    while(n<1 || n>8);
}
