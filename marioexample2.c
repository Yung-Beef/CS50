#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Gets the size of the grid as a positive integer
    int n = get_size();

    // Prints a grid of bricks
    print_grid(n);
}

int get_size(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);
    return n;
}

void print_grid(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
