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

    // get user input for plaintext
    string plaintext = get_string("plaintext:  ");
    int plainlen = strlen(plaintext);

    // encrypt
    // change user input into a value of 26 or below
    int key = atoi(argv[1]);
    key = key % 26;
    printf("%i\n", key);

    // turn the key into a character
    char keychar = key + 64;
    printf("%c\n", keychar);


    string ciphertext = plaintext;
    for (int i = 0; i < plainlen; i++)
    {
        if (isupper(plaintext[i]))
        {
            ciphertext[i] = plaintext[i] + keychar;
            // Z is 90, if greater than 90, subract 26


        }
        //else if (islower(argv[1][i]))
        //{

        //}
    }

    printf("%s\n", ciphertext);


    // print out ciphertext





}
