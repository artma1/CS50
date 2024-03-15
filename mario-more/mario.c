#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // ask user for size, limit between 1 and 8
    int n;
    do
    {
        n = get_int("chose the size of the pyramid ");
        if (n < 1 || n > 8)
        {
            printf("The size must be between 1 and 8\n");
        }
    }
    while (n < 1 || n > 8);
    for (int i = 1; i <= n; i++)
    {
        // first half of pyramid
        for (int j = i; j < n; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("#");
        }
        // space between the two parts
        for (int l = 1; l <= 2; l++)
        {
            printf(" ");
        }
        // second half of pyramid
        for (int o = 1; o <= i; o++)
        {
            printf("#");
        }
        for (int m = i; m < n; m++)
        {
            printf(" ");
        }
        printf("\n");
    }
}
