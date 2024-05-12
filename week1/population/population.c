#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt for start size
    int s;
    do
    {
        s = get_int("Starting population: ");
    }
    while (s < 9);

    // Prompt for end size
    int e;
    do
    {
        e = get_int("Ending population: ");
    }
    while (e < s);

    // TODO: Calculate number of years until we reach threshold
    int y = 0;
    for (int p = s; p < e; y++)
    {
        p = (p + (p / 3) - (p / 4));
    }

    // TODO: Print number of years
    printf("%i\n", y);
}
