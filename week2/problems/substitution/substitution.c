#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int k, string argv[])
{
    // ensure the whole key is uppercase
    string key = argv[1];
    int keylen = strlen(argv[1]);
    for (int i = 0; i < keylen; i++)
    {
        if (islower(key[i]))
        {
            key[i] = toupper(key[i]);
        }
    }

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

    // ensure no duplicate letters
    for (int i = 0; i < keylen; i++)
    {
        if (!isalpha(argv[1][i]))
        {
        printf("Invalid key.\n");
        return 1;
        }
        for (int j = i + 1; j < 26; j++)
        {
            if (argv[1][j] == argv[1][i])
            {
                printf("Invalid key.\n");
                return 1;
            }
        }
    }

    // get plaintext input
    string plaintext = get_string("plaintext:  ");
    int plainlen = strlen(plaintext);
    string ciphertext = plaintext;

    // substitute character by character
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

    // output ciphertext
    printf("ciphertext: %s\n", ciphertext);
    return 0;
}
