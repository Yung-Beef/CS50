#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    // get input

    string players[2];
    players[0] = "Player 1";
    players[1] = "Player 2";

    string words[2];

    for (int i = 0; i < 2; i++)
    {
        words[i] = get_string("%s: ", players[i]);
    }

    //implement the letter values
    char alphabet[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

    //put alphabet in a 25 array, if the letter is <z keep going? then find it's place, and find that in another array with the scores

    // calculate scores
    // determine string length
    int score1 = 0;
    int score2 = 0;

    for (int i = 0, n = strlen(words[0]); i < n; i++)
    {
        //does whatever is here character by character
        //%c through each letter of the string/array and save them in

        // this is the first letter, now do the math - save the result to a sum (need to predefine) and keep updating it while it loops
        for (int j = 0; alphabet[j] < words[0][i]; j++)
        {
            score1 += points[j];
        }


    }

    printf("%i\n", score1);
    //go letter by letter

    //determine value of each letter - give each letter a variable, determine the value and then assign that value to the variable

    //sum the values

    //repeat for player 2/word 2




    //say who won



}
