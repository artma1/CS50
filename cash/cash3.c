#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int c;
    int i;
    int coin; int r; int t;
    printf("Change Calculator\n");
    printf("I calculate how many coins to give back in change\n");
    do
    {
        c = get_int("Specify the change in dollars: ");
        if(c <= 0)
        {
            printf ("Value can't be zero or negative\n");
        }
    }
    while (c <= 0);
    i = c;
    r = i % 25;   //remainder c25
    coin = i / 25;     //number of coins
    printf("Number of 25 cents coins: %d", coin);
    printf ("\n");
    printf("Balance: %d", r);
    printf ("\n");
    t = coin;
    if (r>0)
    {
        coin = r / 10;
        r = r % 10;
        printf("Number of 10 cents coins: %d", coin);
        printf ("\n");
        printf("Balance: %d", r);
        printf ("\n");
    }
    else
    {
        coin = 0;
        printf("Number of 10 cents coins: %d", coin);
        printf ("\n");
        printf("Balance: %d", r);
        printf ("\n");
    }
    t = t + coin;
    if (r>0)
    {
        coin = r / 5;
        r = r % 5;
        printf("Number of 5 cents coins: %d", coin);
        printf ("\n");
        printf("Balance: %d", r);
        printf ("\n");
    }
    else
    {
        coin = 0;
        printf("Number of 5 cents coins: %d", coin);
        printf ("\n");
        printf("Balance: %d", r);
        printf ("\n");
    }
    t = t + coin;
    if (r>0)
    {
        coin = r;
        printf("Number of 1 cent coins: %d", coin);
        printf ("\n");
        printf("Balance: %d", r);
        printf ("\n");
    }
    else
    {
        coin = 0;
        printf("Number of 1 cent coins: %d", coin);
        printf ("\n");
        printf("balance: %d", r);
        printf ("\n");
        t = t + coin;
    }
    printf("(change in coins needed only bellow 1 dollar)\n");
    printf(" all coins: %d", t);
    printf("\n");
}