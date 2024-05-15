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
    // if period, increment sentence variable by one
    // if space, increment word variable by one
    // if alphabetical, increment letter variable by one
    // if other punctuation, ignore

    int sentences = 0;
    int words = 1;
    int letters = 0;
    for (int i = 0; i < length; i++)
    {
        if (text[i] == '.')
        {
            sentences += sentences;
        }
        else if (isblank(text[i]))
        {
            words += words;
        }
        else if (isalpha(text[i]))
        {
            letters += letters;
        }
    }

    printf("%i\n", length);
    printf("%i\n", sentences);
    printf("%i\n", words);
    printf("%i\n", letters);



    // computer the score with the algorithm


    // print out the reading level

}

//int countletters(string text)
//{

//}
