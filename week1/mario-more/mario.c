#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // get user input for n
    int n = get_int("Size: ");

    for (int r = 0; r < n; r++)
    {
        for (int w = 0; w < n; w++)
        {
            printf("#");
        }
        printf("\n");
        printf("#");
    }
    printf("\n");

}
