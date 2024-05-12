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

    // get every other number 2nd from the end and multiply by 2
    int n1 = ((n % 100) / 10) * 2;
    int n2 = ((n % 10000) / 1000) * 2;
    int n3 = ((n % 1000000) / 100000) * 2;
    int n4 = ((n % 100000000) / 10000000) * 2;
    int n5 = ((n % 10000000000) / 1000000000) * 2;
    int n6 = ((n % 1000000000000) / 100000000000) * 2;
    int n7 = ((n % 100000000000000) / 10000000000000) * 2;
    int n8 = ((n % 10000000000000000) / 1000000000000000) * 2;
    // sum the digits of those numbers
    n1 = (n1 % 100 / 10) + (n1 % 10)
    n2 = (n2 % 100 / 10) + (n2 % 10)
    n3 = (n3 % 100 / 10) + (n3 % 10)
    n4 = (n4 % 100 / 10) + (n4 % 10)
    n5 = (n5 % 100 / 10) + (n5 % 10)
    n6 = (n6 % 100 / 10) + (n6 % 10)
    n7 = (n7 % 100 / 10) + (n7 % 10)
    n8 = (n8 % 100 / 10) + (n8 % 10)
    // get the rest of the numbers from the card number
    int n9 = (n % 10);
    int n10 = (n % 1000) / 100;
    int n11 = (n % 100000) / 10000;
    int n12 = (n % 10000000) / 1000000;
    int n13 = (n % 1000000000) / 100000000;
    int n14 = (n % 100000000000) / 10000000000;
    int n15 = (n % 10000000000000) / 1000000000000;
    int n16 = (n % 1000000000000000) / 100000000000000;
    // sums
    int sum1 = n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8
    int sum2 = n9 + n10 + n11 + n12 + n13 + n14 + n15 + n16
    int sum3 = sum1 + sum2

    if ((sum3 % 10) != 0)
    {
        printf("Invalid");
    }
    else
    {
        if ()
    }




        printf("%i\n", n1);






}
