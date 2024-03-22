#include <cs50.h>
#include <ctype.h>
#include <math.h>
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
    int cont = 0;
    float sentences = 0;
    int lenght = strlen(text);
    int tsentences = 0;
    float tL = 0;

    for(int i = 0; i < lenght; i++)
    {
        if (text[i] == ' ')
        {
            nw++;
        }
        if (text[i] == '.' || text[i] == '!' || text[i] == '?' || text[i] == ';')
        {
            sentences++;
         }
        if(isupper(text[i]) || islower(text[i]))
        {
            L++;
        }
        tL = (L*100)/nw;
        tsentences = (sentences*100)/nw;
    }
    int index = 0.0588 * tL - 0.296 * tsentences - 15.8;
    index = round(index);
    return (index);
    //int index = 0.0588 * L - 0.296 * S - 15.8
}
