#include <ctype.h>
#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(int k, string argv[])
{
    // define command-line argument, non-negative integer
    if (k = 0 || k > 1)
    {
        printf("Please enter a positive integer.");
        return 1;
    }
    else if (isalpha(k) || isblank(k) || ispunct(k))
    {
        printf("Usage: ./caesar key");
        return 1;
    }
    else if ()

        // if they enter 0 or 2+ CLAs, print error and return 1
        // if any of the CLAs are not decimal digits, print error and return 1

    // get user input for plaintext


    // encrypt


    // print out ciphertext





}
