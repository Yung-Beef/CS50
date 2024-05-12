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
    while (e <= s);

    printf("%i and %i\n", s, e);

    // TODO: Calculate number of years until we reach threshold
    for (p = 1200; p < e; p = (p + (p / 3) - (p / 4)))


    // TODO: Print number of years
    //printf("%f", y);
}
