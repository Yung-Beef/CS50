#include <stdio.h>

int main (int argc, string argv[]) // gives you an int of the length of the user input, and an array of each word they entered
{
    if (argc == 2)
    {
        printf("hello, %s\n", argv[1]);
    }
    else
    {
        printf("hello, world\n");
    }
}
