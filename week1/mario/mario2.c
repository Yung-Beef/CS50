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
        for (int d = i; d > h; d--)
        {
            printf(" ");
        }
        for (int c = 0; c < h; c++)
        {
            printf("#");
        }
        printf("  ");
        for (int c = 0; c > h; c--)
        {
            printf("#");
        for (int d = i; d < h; d++)
        {
            printf(" ");
        }



        printf("\n");
    }
}
