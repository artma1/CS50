#include <stdio.h>
#include <cs50.h>

int main (void)
{
int n;
    do
        {
        n = get_int("Chose the pyramid size: " );
        if (n<0)
        printf("Size must be bigger than 0\n");
        }
    while(n<0);
    for (int i=1; i<=n; i++)
    {
        for (int j=i; j<n; j++)
        {
            printf(" ");
        }
        for (int k=)
        printf("\n");
    }
}

