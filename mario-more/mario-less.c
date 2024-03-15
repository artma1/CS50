#include <stdio.h>
#include <cs50.h>

int main(void);
{
int n;
    do
        {
        int n = get_int("Chose the pyramid size" );
        if (n<0)
        printf("Size must be bigger than 0");
        }
    while(n<0);
}

