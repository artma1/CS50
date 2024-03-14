#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int n;
    do
    {
    n = get_int("chose the size of the pyramid ");
    printf("The size must be between 1 and 8\n");
    }
    while (n<1||n>8)
}
