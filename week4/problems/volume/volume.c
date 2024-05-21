// Modifies the volume of an audio file

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// Number of bytes in .wav header
const int HEADER_SIZE = 44;

int main(int argc, char *argv[])
{
    // Check command-line arguments
    if (argc != 4)
    {
        printf("Usage: ./volume input.wav output.wav factor\n");
        return 1;
    }

    // Open files and determine scaling factor
    FILE *input = fopen(argv[1], "r");
    if (input == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    FILE *output = fopen(argv[2], "w");
    if (output == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    float factor = atof(argv[3]);

    // TODO: Copy header from input file to output file
    (44 * uint8_t) h;

    while (fread(&h, 44, 1, input) != 0)
    {
        fwrite(&h, 44, 1, output);
    }

    // TODO: Read samples from input file and write updated data to output file
    (2 * uint8_t) b;
    while (fread(&h, 2, 1, src[44]) != 0)
    {
        fwrite(&h, 2, 1, dst[44]);
    }

    // Close files
    fclose(input);
    fclose(output);
}
