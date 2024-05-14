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

    for (int i = 0; i < 2; i++)
    {
        get_string("%s: ", players[i]);
    }

    //printf("%s\n", players[0]);
    //printf("%s\n", players[1]);
    //string p1 = get_string("Player 1: ");

    //string p2 = get_string("Player 2: ");


    // calculate scores
//string words[2];


    //say who won



}
