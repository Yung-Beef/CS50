#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Input: ");

    printf("Output: ");
    for (int i = 0; n = strlen(s); i < n; i++) // this just prints a string character by character (i+2 would print every other char)
    // you can initialize 2 variables here (i and n) and strlen only gets called once at the beginning
    {
        printf("%c", s[i]);
    }
    printf("\n");
}
