#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n; // the * is declaring the pointer
    printf("%p\n", p);
    printf("%i\n", *p); // the * means go to that address
}
