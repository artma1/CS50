#include <stdio.h>
#include <cs50.h>

int main (void)
{
    //diz que n é um integral, recebe n do usuário
    int n;
    do
    {
    n = get_int("chose the size of the pyramid ");
    if (n<1||n>8)
        {
        printf("The size must be between 1 and 8\n");
        }
    }
    while (n<1||n>8);
    for (int i=1; i<n; i++)
    {
        for (int j=1; j<=i; j++)
        {
            printf(" ");
        }
        for (int k=i; k<=n; k++)
        {
            printf("#");
        }

         printf("\n");
    }
}
