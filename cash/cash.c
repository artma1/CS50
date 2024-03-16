#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int c;
    int i;
    // int j;
    int c1;
    int c5;
    int c10;
    int c25;
    do
    {
        c = get_int("Specify the change: ");
        if (c <= 0)
        {
            printf("Change can't be zero or negative\n");
        }
    }
    while (c <= 0);
    i = c % 100;
    // j = i % 10;
    printf("%i\n", i);
    // printf("%j\n", j);
c25 = i / 25;
int c25r = i % 25;
c10 = c25r / 10;
int c10r = c25r % 10;
c5 = c10r /5;
int c5r = c5%5;
c1 = c5r;
printf("The number of coins are:\n");
printf("25 cents: %d\n", c25);
printf("10 cents: %d\n", c10);
printf("5 cents: %d\n", c5);
printf("1 cent: %d\n", c1);
}
