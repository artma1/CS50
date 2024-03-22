#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if(argv[1] == 0)
    {
        printf("Error. \n");
        return (1);
    }
    else if (argc >= 3)
    {
        printf("Error. Too many parameters\n");
        return (1);
    }
    long key = atol(argv[1]);
    if (!isdigit(key))
    {
        printf("Usage: ./caesar key\n");
        return (1);
    }
    string plain = get_string("plaintext:  ");
    for (int i = 0; i = lenght ; i++)
    {
        plain []
    }



    string cypher = get_string("cyphertext: ");
    printf("\n");
}
