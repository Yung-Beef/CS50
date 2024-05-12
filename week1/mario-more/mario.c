#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // get user input for n
    int n = get_int("Size: ");

    int c = 0;
    while (c < n)
    {
        printf("#");
        c++;
    }
    printf("\n");

}
