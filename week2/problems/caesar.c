#include <ctype.h>
#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(int k, string argv[])
{
    // define command-line argument, non-negative integer
    // ensure just one command-line argument
    if (k == 1 || k > 2)
    {
        printf("Please enter just one positive integer.\n");
        return 1;
    }
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

        // if they enter 0 or 2+ CLAs, print error and return 1
        // if any of the CLAs are not decimal digits, print error and return 1

    // get user input for plaintext


    // encrypt


    // print out ciphertext





}
