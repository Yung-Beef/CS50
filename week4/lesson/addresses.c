#include <stdio.h>
//#include <cs50.h> only needed this for the string data type which doesn't really exist

int main(void)
{
    //string s = "HI!";
    char *s = "HI!";
    printf("%p\n", s); // s just poins to the beginning of the string, and it knows the string ends with the null \o
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);

    // int n = 50;
    // int *p = &n; // the * is declaring the pointer, int* p works and so does int * p, but int *p is conventional
    // printf("%p\n", p);
    // printf("%i\n", *p); // the * means go to that address
}
