#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long x = get_long("X ");
    long y = get_long("Y ");

    double z = (double) x / (double) y;
    printf("%.20f\n", z);
}

// int main(void)
//{
  //  long x = get_long("X ");
  //  long y = get_long("Y ");

  //  printf("%li\n", x + y);
//}
