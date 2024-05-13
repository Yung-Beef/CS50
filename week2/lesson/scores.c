#include <stdio.h>

int main(void)
{
    int score1 = 72;
    int score2 = 73;
    int score3 = 33;

    // can fix this a few ways: make at least one number on the right a float (like 3.0)
    printf("My average is: %f\n", (score1 + score2 + score3) / 3);
}
