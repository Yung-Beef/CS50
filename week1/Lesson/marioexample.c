#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Gets the size of the grid as a positive integer
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);

    // Prints a grid of bricks
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
