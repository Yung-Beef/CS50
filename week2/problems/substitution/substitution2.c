#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

string substitute(string plaintext, string arvg[]);

int main(int k, string argv[])
{
    int keylen = strlen(argv[1]);
    // ensure just one command-line argument
    if (k == 1 || k > 2)
    {
        printf("Please enter just one key.\n");
        return 1;
    }
    else if (keylen != 26)
    {
        printf("Invalid key.\n");
        return 1;
    }
    char checker[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 0; i < keylen; i++)
    {
        if (!isalpha(argv[1][i]))
        {
        printf("Invalid key.\n");
        return 1;
        }
        for (int j = 0; j < 26; j++)
        {
            if (checker[j] == argv[1][i])
            {
                checker[j] = 0;
            }
            else if (checker[j] == 0)
            {
                printf("Invalid key.\n");
                return 1;
            }
        }
    }
    // TODO: ensure the key contains 26 characters, every letter once, and only alphabetic characters
    // make another alphabet string, go through and if there is a match, set that one to 0 in the new alphabet string
    // if there's no match, print error


    // get plaintext input
    string plaintext = get_string("plaintext:  ");


    // substitute character by character
    string ciphertext = substitute(plaintext, arvg);

    // output ciphertext
    printf("ciphertext: %s\n", ciphertext);
    return 0;
}

string substitute(string plaintext, string arvg[])
{
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int plainlen = strlen(plaintext);
    string ciphertext = plaintext;

    for (int i = 0; i < plainlen; i++)
        {
            if (isupper(plaintext[i]))
            {
                ciphertext[i] = (plaintext[i] + argv[1][i] - alphabet[i]);
                // wrap-around either direction
                if (ciphertext[i] > 90)
                {
                    ciphertext[i] -= 26;
                }
                else if (ciphertext[i] < 65)
                {
                    ciphertext[i] += 26;
                }
            }
            else if (islower(plaintext[i]))
            {
                ciphertext[i] = (plaintext[i] + argv[1][i] - alphabet[i]);
                // wrap-around either direction
                if (ciphertext[i] > 122)
                {
                    ciphertext[i] -= 26;
                }
                else if (ciphertext[i] < 97)
                {
                    ciphertext[i] += 26;
            }
        }
    }
}
