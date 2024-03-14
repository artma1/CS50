#include <stdio.h>
#include <cs50.h>

int main (void)
{
    //diz que n é um integral, recebe n do usuário
    int n;
    do
    {
    n = get_int("chose the size of the pyramid ");
    }
    while (n<1||n>8);
    if (n<1||n>8){
    printf("The size must be between 1 and 8\n");
    }
    for (int i=0; i<=n; i++)
    {
        for (int j=0; j<n; j++)
        printf("#\n");
    }
}
