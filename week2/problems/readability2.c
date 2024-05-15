#include <ctype.h>
#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int countletters(string text);
int countwords(string text);
int countsentences(string text);

int main(void)
{
    // prompt user for text
    string text = get_string("Text: ");

    // determine number of letters, words, sentences
    int letters = countletters(text);
    int words = countwords(text);
    int sentences = countsentences(text);

    printf("%i\n", sentences);
    printf("%i\n", words);
    printf("%i\n", letters);



    // computer the score with the algorithm (index = 0.0588 * L - 0.296 * S - 15.8)
    //int score = (0.0588 * ((letters / words) * 100)) - (0.296 * ((sentences / words) * 100)) - 15.8;
    //printf("%i\n", score);

    // print out the reading level

}

int countletters(string text)
{
    int length = strlen(text);
    int l = 0;
    for (int i = 0; i < length; i++)
    {
        char c = text[i];
        // if alphabetical, increment letter variable by one
        if (isalpha(c))
        {
            l += 1;
        }
    }
    return l;
}

int countwords(string text)
{
    int length = strlen(text);
    int w = 1;
    for (int i = 0; i < length; i++)
    {
        char c = text[i];
        // if space, increment word variable by one
        if (isblank(c))
        {
            w += 1;
        }
    }
    return w;
}

int countsentences(string text)
{
    int length = strlen(text);
    int s = 0;
    for (int i = 0; i < length; i++)
    {
        char c = text[i];
        // if sentence ender, increment sentence variable by one
        if (c == '.' || c == '?' || c == '!')
        {
            s += 1;
        }
    }
    return s;
}
