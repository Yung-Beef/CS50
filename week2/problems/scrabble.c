#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    // get a word from each player
    string players[2];
    players[0] = "Player 1";
    players[1] = "Player 2";
    string words[2];
    for (int i = 0; i < 2; i++)
    {
        words[i] = get_string("%s: ", players[i]);
    }

    // convert to uppercase
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0, n = strlen(words[i]); j < n; j++)
        {
            words[i][j] = toupper(words[i][j]);
        }
    }

    // establishing point values
    int alphabet[] = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90};
    int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

    // create score variables
    int score1 = 0;
    int score2 = 0;

    //goes letter by letter through player 1's word
    for (int i = 0, n = strlen(words[0]); i < n; i++)
    {
        int letter = words[0][i];
        for (int j = 0; alphabet[j] == letter; j++)
        {
            if (alphabet[j] == letter)
            {
                score1 += points[j];
            }
        }


    }

    //printf("%i\n", score1);
    //go letter by letter

    //determine value of each letter - give each letter a variable, determine the value and then assign that value to the variable

    //sum the values

    //repeat for player 2/word 2




    //say who won



}
