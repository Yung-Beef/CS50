#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //char c1 = 'H';
    //char c2 = 'I';
    //char c3 = '!';

    //printf("%i %i %i\n", c1, c2, c3);

    //string s = "HI!";
    //printf("%s\n", s);
    //printf("%c%c%c\n", s[0], s[1], s[2]); // shows that strings are just an array

    //string s = "HI!";
    //printf("%i %i %i %i\n", s[0], s[1], s[2], s[3]); // shows the extra hidden 0 (known as NUL) that's at the end of all strings in C

    string words[2];
    words[0] = "HI!";
    words[1] = "BYE!";
    printf("%s\n", words[0]);
    printf("%c%c%c%c\n", words[1][0], words[1][1], words[1][2], words[1][3]); //prints out each letter of that
}
