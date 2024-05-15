#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int k, string argv[])
{
    // ensure just one command-line argument
    if (k == 1 || k > 2)
    {
        printf("Please enter just one key.\n");
        return 1;
    }

    // TODO: ensure the key contains 26 characters, every letter once, and only alphabetic characters


    // get plaintext input
    string plaintext = get_string("plaintext:  ");
    int plainlen = strlen(plaintext);

    // substitute - case must be preserved, figure out the number difference between each
    // put the alphabet in an array, and the key, and use a for loop to find the difference between each, which can be used for A and a
    int key[26];
    for (int i = 0; i < 25; i++)
    {
        key[i] = atoi(argv[i]);
    }

    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string ciphertext = plaintext;
    for (int i = 0; i < plainlen; i++)
    {
        if (isupper(plaintext[i]))
        {
            ciphertext[i] = (plaintext[i] + argv[i] - alphabet[i]);
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
            ciphertext[i] = (plaintext[i] + key[i] - alphabet[i]);
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

    // output ciphertext
    printf("ciphertext: %s\n", ciphertext);
    return 0;


}
