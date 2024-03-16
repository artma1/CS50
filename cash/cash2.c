#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int c;
    int i;
    //int j;
    int c25; int contador; int resto; int r;
    do
    {
        c = get_int("Specify the change: ");
        if(c <= 0)
        {
            printf ("Change can't be zero or negative\n");
        }
    }
    while (c <= 0);
    i = c % 100;
    //j = i % 10;
    printf("%i\n", i);
    //printf("%j\n", j);
    c25 = i % 25;   //resto
    i = i / 25;     //num de moedas
    if (c25 != 0)

    for (r = 0; r == 10; r++)
        {
            printf("Moedas de:");
        }
}
