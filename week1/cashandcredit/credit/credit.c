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
    n1 = (n1 % 100) / 10 + (n1 % 10)
    n2 = (n2 % 100) / 10 + (n2 % 10)
    n3 = (n3 % 100) / 10 + (n3 % 10)
    n4 = (n4 % 100) / 10 + (n4 % 10)
    n5 = (n5 % 100) / 10 + (n5 % 10)
    n6 = (n6 % 100) / 10 + (n6 % 10)
    n7 = (n7 % 100) / 10 + (n7 % 10)
    n8 = (n8 % 100) / 10 + (n8 % 10)




        printf("%i\n", n1);






}
