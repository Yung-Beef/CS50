#include <ctype.h>
#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

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
    for (i = 0; i < k; i++)
    {
        if (isupper(argv[1][i]))
        {
            
        }
        else if (islower(argv[1][i]))
        {

        }
    }




    // print out ciphertext





}
