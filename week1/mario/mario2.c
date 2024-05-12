#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // get user input
    int i;
    do
    {
        i = get_int("Size: ");
    }
    while (i < 1 || i > 8);

    // create pyramid

    for (int h = 1; h <= i; h++)
    {
        // left side
        for (int ld = i; ld > h; ld--)
        {
            printf(" ");
        }
        for (int lc = 0; lc < h; lc++)
        {
            printf("#");
        }

        // middle spaces
        printf("  ");

        // right side
        for (int rc = i; rc < h; rc++)
        {
            printf("#");
        }
        for (int rd = 0; rd < h; rd++)
        {
            printf(" ");
        }



        printf("\n");
    }
}
