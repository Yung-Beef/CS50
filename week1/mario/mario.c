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
    for ()
    {
        // creating each # or space in a row
        for (w = 1; w <= i; w++)
        {
            // how many spaces to print
            // i - w is how many spaces (s)
            // i - s is how many #s
            int s = (i - w);
            int h = (i - s);
            printf(");
            // how many #s to print
            printf();
        }
        w = 0
    }

}
