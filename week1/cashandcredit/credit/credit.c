#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long n;
    do
    {
        long n = get_long("Number: ");
    }
    while (n < 0);

    // checksum
    int n1 = ((n % 100) / 10) * 2
    int n2 = ((n % 10000) / 1000) * 2
    int n3 = ((n % 1000000) / 100000) * 2
    int n4 = ((n % 100000000) / 10000000) * 2
    int n5 = ((n % 10000000000) / 1000000000) * 2
    int n6 = ((n % 1000000000000) / 100000000000) * 2
    int n7 = ((n % 100000000000000) / 10000000000000) * 2
    int n8 = ((n % 10000000000000000) / 1000000000000000) * 2

        printf("%i\n", n1);






}
