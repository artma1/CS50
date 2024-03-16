#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int c;
    int i;
    //int j;
    int c25; int coin; int resto; int r;
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
    r = i % 25;   //resto c25
    coin = i / 25;     //num de moedas
    printf("Number of 25 cent coins: %d", coin);
    printf ("\n");
    printf("resto: %d", r);
    printf ("\n");
    if (r>0)
    {
        coin = r / 10;
        r = r % 10;
    }
    else
    {
        coin = r / 10;
        r = 
    }
}
