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
    


    // calculate scores
    // determine string length

    for (int i = 0, n = strlen(words[1]); i < n; i++)
    {
        //does whatever is here character by character
        //%c through each letter of the string/array and save them in
    }

    //go letter by letter

    //determine value of each letter - give each letter a variable, determine the value and then assign that value to the variable

    //sum the values

    //repeat for player 2




    //say who won



}
