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
    while (i < 0 || i > 9);

    // create pyramid

    for (int h = 1; h <= i; h++)
    {
        for (int d = i; d > 1; d--)
        {
            printf(".");
        }
        for (int c = 0; c < h; c++)
        {
            printf("#");
        }
        printf("\n");
    }
}
