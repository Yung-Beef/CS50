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

    printf("Average: %f\n", average(N, scores));
}

float average(int length, int array[]) // the array could be called anything, it doesn't need to be called "array", but it needs the []
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return sum / (float) length; // just one part of the operation needs to be a float and then it will return a float
}
