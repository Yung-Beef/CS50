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
    char alphabet[] = {A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z,};


    //put alphabet in a 25 array, if the letter is <z keep going? then find it's place, and find that in another array with the scores


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
