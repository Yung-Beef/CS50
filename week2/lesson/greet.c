#include <stdio.h>

int main (int argc, string argv[]) // gives you an int of the length of the user input, and an array of each word they entered
{
    for (int i = 0; i < argc; i++) // will print all the words they entered
    {
        printf("%s\n", argv[i]);
    }


    //if (argc == 2)
    //{
        //printf("hello, %s\n", argv[1]);
    //}
    //else
    //{
        //printf("please enter just one word\n");
    //}
}
