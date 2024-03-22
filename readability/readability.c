#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// insert formula
// repeat until find character ". ! ? ;" in the end of sentence
// the array is the size of the entire sentence
// grade 16 or more, output is "grade 16+", grade 1 or less is "1-"
int test(string text);

int main(void)
{
    string text = get_string("Text: ");
    test(text);
    if (test(text) > 16)
    {
        printf("The grade is: 16+\n");
    }
    else if (test(text) < 1)
    {
        printf("The grade is: 1-\n");
    }
    else
    printf("The grade is: %i\n", test(text));
}

int test(string text)
{
    // L is letters for 100 words
    // S is sentences per 100 words

    // counting words
    int nw = 1;
    int L = 0;
    int sentences = 0;
    int lenght = strlen(text);

    for(int i = 0; i < lenght; i++)
    {
        if (text[i] == ' ')
        {
            nw++;
        }
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
         }
        if(isupper(text[i]) || islower(text[i]))
        {
            L++;
        }
        //if(nw == 100)
        //{
        //    nw = nw - 100;
        //}
    }
    int tL = 
    int index = 0.0588 * (L/100) - 0.296 * (sentences/100) - 15.8;
    return (index);
    //int index = 0.0588 * L - 0.296 * S - 15.8
}
