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
        for (int ls = i; ls > h; ls--)
        {
            printf(" ");
        }
        for (int lh = 0; lh < h; lh++)
        {
            printf("#");
        }

        // middle spaces
        printf("  ");

        // right side
        for (int rh = 0; rh < h; rh++)
        {
            printf("#");
        }
        for (int rs = i; rs > h; rs--)
        {
            printf(" ");
        }

        printf("\n");
    }
}
