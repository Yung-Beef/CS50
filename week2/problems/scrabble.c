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
    int alphabet[] = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90};
    //string alphabet1[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
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
        printf("%c\n", words[0][i]);
        int letter = words[0][i];
        for (int j = 0; alphabet[j] == letter; j++)
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
