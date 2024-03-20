#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// prompt user for word
// assign word to number
// check if uppercase or lowercase
// detect who is the winner
// print winner
int make_score(string word);

int alpha[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
int main(void)
{
    string str1 = get_string("Player 1 insert your word: ");
    string str2 = get_string("Player 2 insert your word: ");
    printf("\n");
    make_score(str1);
    make_score(str2);
    if (make_score(str1) > make_score(str2))
    {
        printf("Player 1 wins!\n");
    }
    else if (make_score(str1) < make_score(str2))
    {
        printf("Player 2 wins!\n");
    }
    else
        printf("Tie!\n");
    // printf("Player 1 score is %i and player 2 score is %i\n", make_score(str1),
    // make_score(str2));
}

int make_score(string word)
{
    int sum = 0;
    {
        for (int i = 0, lenght = strlen(word); i < lenght; i++)
        {
            if (isupper(word[i]))
            {
                // for each letter on word, do 'letter minus A'
                // thus finding the position of the letter in alpha[]
                sum += alpha[word[i] - 'A'];
            }
            else if (islower(word[i]))
            {
                sum += alpha[word[i] - 'a'];
            }
            else
            {
                sum += 0;
            }
        }
    }
    return (sum);
}
