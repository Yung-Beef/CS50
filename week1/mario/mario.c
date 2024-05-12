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

    printf("%i\n", i);

    // create pyramid

    int w = 1;
    int e = (i - w);

    for (w = 0; w < i; w++)
    {
        while (e > 0)
        {
            printf(" ");
            e--;
        }
        e = (i - w);
        int h = w;
        while (h == w)
        {
            printf("#");
            h++;
        }
        printf("\n");
    }
}
