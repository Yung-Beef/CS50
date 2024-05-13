#include <cs50.h>
#include <stdio.h>

//int main(void)
//{
    //int score1 = 72;
    //int score2 = 73;
    //int score3 = 33;

    // can fix this a few ways: make at least one number on the right a float (like 3.0), or do " / (float) 3"
    //printf("My average is: %f\n", (score1 + score2 + score3) / 3.0);

int main(void)
{
    const int N = 3;
    int scores[N];
    for (int i = 0; i < N; i++ )
    {
        scores[i] = get_int("Score: ");
    }

    printf("My average is: %f\n", (scores[0] + scores[1] + scores[2]) / (float) n);
}
