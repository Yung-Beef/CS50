#include <cs50.h>
#include <stdio.h>

// write "echo $?" in the terminal to get the exit status code of the last program run
int main (int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Missing command-line argument.\n");
        return 1;
    }
    printf("hello, %s\n", argv[1]);
    return 0; //programs return 0 by default if everything works good
}
