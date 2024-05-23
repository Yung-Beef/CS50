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

    // i is the location in memory
    while (i != 0xff && i + 1 != 0xd8 && i + 2 != 0xff)
    {
        i++
    }

    // malloc to create 512 byte temp file? or just create an array of 512 bytes?

    // read the bytes into a temp file

    // write the temp file into an output file who's name changes

    // if header found, fwrite the next 512 bytes to a new file

    // repeat loop



}
