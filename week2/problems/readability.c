#include <ctype.h>
#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // prompt user for text
    string text = get_string("Text: ");

    // determine length of text
    int length = strlen(text);

    // determine number of letters, words, sentences
    int sentences = 0;
    int words = 1;
    int letters = 0;
    for (int i = 0; i < length; i++)
    {
        char c = text[i];
        // if sentence ender, increment sentence variable by one
        if (c == '.' || c == '?' || c == '!')
        {
            sentences += 1;
        }
        // if space, increment word variable by one
        else if (isblank(c))
        {
            words += 1;
        }
        // if alphabetical, increment letter variable by one
        else if (isalpha(c))
        {
            letters += 1;
        }
    }

    printf("%i\n", length);
    printf("%i\n", sentences);
    printf("%i\n", words);
    printf("%i\n", letters);

    // computer the score with the algorithm (index = 0.0588 * L - 0.296 * S - 15.8)
    int score = (0.0588 * (letters / words * 100)) - (0.296 * (sentences / words * 100)) - 15.8;
    printf("%i\n", score);
    // print out the reading level

}

//int countletters(string text)
//{

//}
