#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Input: ");
    int length = strlen(s);

    printf("Output: ");
    for (int i = 0; i < length; i++) // this just prints a string character by character (i+2 would print every other char)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}
