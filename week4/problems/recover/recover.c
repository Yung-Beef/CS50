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

    // header is 3.5 bytes or 28 bits


    if fread(file, 7, 1, )

    // while memory location + 6? doesn't equal the header, go ahead 512 bytes
    // malloc to create 512 byte temp file? or just create an array of 512 bytes?

    // while fread doesn't return 0, read the file, if blah blah output, then increase the read location by 512

    // where i is the location in the file?
    for (int i = 0; i < //?; i + 512)
    {
        if (i = 0xff && i + 1 = 0xd8 && i + 2 = 0xff)
        {
        // create a temp file somehow and put the next 512 bytes into it
        // fwrite the temp file data into a new file whose name changes as this loops
        }
    }









}
