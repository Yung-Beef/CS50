#include <stdint.h>
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
    if (file == NULL)
    {
        printf("Invalid file.\n");
        return 1;
    }

    uint8_t temp[512];
    char digits[8];
    int c = 0;

    while (fread(&temp, 1, 512, file) == 512)
    {
        if (temp[0] == 0xff && temp[1] == 0xd8 && temp[2] == 0xff && (temp[3] & 0xf0) == 0xe0)
        {
            sprintf(digits, "%03i.jpg", c);
            FILE *img = fopen(digits, "a");
            fwrite(&temp, 1, 512, img);
            fread(&temp, 1, 512, file);

            while (temp[0] != 0xff && temp[1] != 0xd8 && temp[2] != 0xff && (temp[3] & 0xf0) != 0xe0)
            {
                fwrite(&temp, 1, 512, img);
                fread(&temp, 1, 512, file);
            }

            fclose(img);
            c++;
        }
        if (c == 49)
        {
            return 0;
        }
    }
    fclose(file);
    return 0;
}
