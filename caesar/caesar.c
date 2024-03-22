#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (isdigit(argv[1]))
    {
        long key = argv[1];
    }
    else
    {
        printf("Usage: ./caesar key\n")
    }
    return (1);
    string plain = get_string("plaintext:  ");
    string cypher = get_string("cyphertext: ");
    printf("\n");
}
