#include <cs50.h>
#include <stdio.h>
#include <string.h>

// insert formula
// repeat until find character ". ! ? ;" in the end of sentence
// the array is the size of the entire sentence
// grade 16 or more, output is "grade 16+", grade 1 or less is "1-"
int test(int nw);

int main(void)
{
    string text = get_string("Text: ");
    printf("%s\n", text);

    test(text);
}

int test(int nw)
{
    // L is letters for 100 words
    // S is sentences per 100 words

    // counting words
    nw = 0;
    for(int i = 0; i = \0 ; i++)
    {
        if (word[i] = '.' || word[i] = '!' || word[i] = '?' word[i] = ' ')
        {
            nw++;
        }
    }
    //int index = 0.0588 * L - 0.296 * S - 15.8
}
