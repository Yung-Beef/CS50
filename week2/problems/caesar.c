#include <ctype.h>
#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int k, string argv[])
{
    // ensure just one command-line argument
    if (k == 1 || k > 2)
    {
        printf("Please enter just one positive integer.\n");
        return 1;
    }
    // ensure the command-line argument is only positive decimal digits
    for (int i = 0; i < k; i++)
    {
        char c = argv[1][i];
        if (isalpha(c) || isblank(c) || ispunct(c))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    printf("%s\n", argv[1]);

    // get user input for plaintext
    string plaintext = get_string("plaintext:  ");

    // encrypt
    // change user input into a value of 26 or below
    int key = atoi(argv[1]);
    printf("%i\n", key);



    //for (i = 0; i < k; i++)
    //{
        //if (isupper(argv[1][i]))
        //{
            //argv[1][i] = argv[1][i] + k;
            // if k is greater than 26, do %26 for the remainder and use that as k to shift
            // if k = 26 do nothing
            // Z is 90, if greater than 90, subract 26


        //}
        //else if (islower(argv[1][i]))
        //{

        //}
    //}




    // print out ciphertext





}
