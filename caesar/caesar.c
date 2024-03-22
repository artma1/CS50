#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if(argv[1] == 0)
    {
        printf("Error. \n");
        return (1);
    }
    if (long isdigit(argv[1]))
    {
        long key = argv[1];
    }
    else
    {
        printf("Usage: ./caesar key\n");
    }
    return (1);
    string plain = get_string("plaintext:  ");
    string cypher = get_string("cyphertext: ");
    printf("\n");
}
