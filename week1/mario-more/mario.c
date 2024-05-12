#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // get user input for n
    int n = get_int("Size: ");

    for (int r = 0; r < n; r++)
    {
        for (int w = (n - (n - 1)); w < n; w++)
        {
            printf("#");
        }
        printf("\n");
    }
    printf("\n");

}
