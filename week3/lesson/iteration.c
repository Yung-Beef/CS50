#include <cs50.h>
#include <stdio.h>

void draw(int n);

int main(void)
{
    int height = get_int("Height: ");
    draw(height);
}

void draw(int n)
{
    // print pyramid of height n - 1 (always put the most base case at the top of a recursive function so it doesn't loop forever)
    draw(n - 1);

    // print one more row
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}



// void draw(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i + 1; j++)
//         {
//             printf("#");
//         }
//         printf("\n");
//     }
// }
