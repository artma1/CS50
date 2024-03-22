#include <cs50.h>
#include <stdio.h>

// insert formula
// repeat until find character ". ! ? ;" in the end of sentence
// the array is the size of the entire sentence
// grade 16 or more, output is "grade 16+", grade 1 or less is "1-"
int main(void)
{
    int text = get_string("Text: ");
    printf("%s", text);
}
