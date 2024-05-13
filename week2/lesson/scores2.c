#include <cs50.h>
#include <stdio.h>

const int N = 3; // global variable, capital N because it's constant

float average (int length, int array[]);

int main(void)
{

    int scores[N];
    for (int i = 0; i < N; i++ )
    {
        scores[i] = get_int("Score: ");
    }

    printf("My average is: %f\n", (scores[0] + scores[1] + scores[2]) / (float) N);
}
