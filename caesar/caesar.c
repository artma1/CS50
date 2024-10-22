#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    int lenght = strlen(plain);
    for (int i = 0; i == lenght ; i++)
    {
        if (isupper(plain [i]))
        {
            plain[i] = plain[i] + key;
        }
        else if (islower(plain[i]))
        {
            plain[i] = plain[i] + key;
        }
    }
    printf("cyphertext: %s", plain);
    printf("\n");
}
