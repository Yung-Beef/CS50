#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // if argc != 2, error
    if (argc != 2)
    {
        printf("Usage ./recover file\n");
        return 1;
    }

    FILE *file = fopen(argv[1], "r");

    // if fopen returns null, error
    if (FILE == NULL)
    {
        printf("Invalid file.\n");
        return 1;
    }


 // loop 512 bytes at a time
 // go until i find the header signature
 // open a new file
 // start writing everything to the new file until i encounter the next header
 // write 512 bytes at a time



}
