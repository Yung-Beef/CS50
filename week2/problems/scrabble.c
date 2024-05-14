#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    // get a word from each player
    string players[] = {"Player 1", "Player 2"};
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

    // establishing point values and score array
    int alphabet[] = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90};
    int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    int score[2];

    //calculate the score for each player
    for (int p = 0; p < 2; p++)
    {       //get each letter of the word
        for (int i = 0, n = strlen(words[p]); i < n; i++)
        {
            //iterate through the alphabet to find that letter
            for (int j = 0; alphabet[j] <= words[p][i]; j++)
            {   //apply the score corresponding to the correct letter
                while (alphabet[j] == words[p][i])
                {
                    score[p] += points[j];
                    break;
                }
            }
        }
    }

    printf("Player 1: %i\n", score[0]);
    printf("Player 2: %i\n", score[1]);
}
