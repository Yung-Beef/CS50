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

    // creating each row
    int w = 1;
    int e = (i - w);
    int h = w;
    for (int r = 1; r <= i; r++)
    {
        e =

        // creating each # or space in a row
        for (w = 1; w <= i; w++)
        {
            // i - w is how many spaces (s)
            // i - s is how many #s

            while (e < )
            printf(");

        }


    }

}
