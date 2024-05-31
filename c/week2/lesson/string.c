#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Input: ");

    printf("Output: ");
    for (int i = 0, n = strlen(s); i < n; i++) // this just prints a string character by character (i+2 would print every other char)
    // initializing 2 variables here with a comma (as long as they are the same type) and strlen only gets called once at the beginning
    {
        printf("%c", s[i]);
    }
    printf("\n");
}
