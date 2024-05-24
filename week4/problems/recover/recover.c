#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define BLOCK_SIZE 512

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
    if (file == NULL)
    {
        printf("Invalid file.\n");
        return 1;
    }

    uint8_t temp[BLOCK_SIZE]; // buffer
    char digits[8]; // the output filename
    int c = 0; // counter of how many jpgs have been found
    bool found = false;
    FILE *img = NULL;

    while (fread(&temp, BLOCK_SIZE, 1, file) == 1)
    {
        if (temp[0] == 0xff && temp[1] == 0xd8 && temp[2] == 0xff && (temp[3] & 0xf0) == 0xe0)
        {
            found = true;
        }
        if (found == true)
        {
            if (c != 0)
            {
                fclose(img);
            }
            sprintf(digits, "%03i.jpg", c);
            img = fopen(digits, "w");
            fwrite(temp, BLOCK_SIZE, 1, img);
            found = false;
            c++;
        }
        else if (c != 0)
        {
            fwrite(temp, BLOCK_SIZE, 1, img);
        }
    }
    fclose(img);
    fclose(file);
    return 0;
}
