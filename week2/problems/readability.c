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

    int sentences;
    int words;
    int letters;
    for (i = 0; i < length; i++)
    {
        if (text[i] = '.')
        {
            sentences += sentences;
        }
        else if (text[i])
    }





    // computer the score with the algorithm


    // print out the reading level

}

//int countletters(string text)
//{

//}
