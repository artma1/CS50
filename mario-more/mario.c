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
    for (int i=1; i<=n; i++)
    {
        for (int j=i; j<n; j++)
        {
            printf(" ");
        }
        for (int k=1; k<=i; k++)
        {
            printf("#");
        }
        for (int l=1; l<=2; l++)
        {
            printf(" ");
        }
        for (int o=1; o<=i; o++)
        {
            printf("#");
        }
        for (int m=i; m<n; m++)
        {
            printf(" ");
        }
        printf("\n");
    }
}
