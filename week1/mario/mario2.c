#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // get user input for n
    int i;
    do
    {
        i = get_int("Size: ");
    }
    while (1 <=i <= 8);

    int c = 0;
    while (c < n)
    {
        printf("#");
        c++;
    }
    printf("\n");

}
