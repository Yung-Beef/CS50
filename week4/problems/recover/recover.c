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

    unit8_t temp[512];
    char *digits[8];
    int c = 0;

    fread(&temp, 1, 512, file);

    while (fread(&temp, 1, 512, file) == 512)
    {
        if (temp[0] = 0xff && temp[1] = 0xd8 && temp[2] = 0xff)
        {
            sprintf(digits, "%03i.jpg", c);
            FILE *img = fopen(digits, "w");
            fwrite(&temp, 1, 512, digits);
            fread(&temp, 1, 512, file);

            while (temp[0] != 0xff && temp[1] != 0xd8 && temp[2] != 0xff)
            {
                fwrite(&temp, 1, 512, digits);
                fread(&temp, 1, 512, file);
            }

            fclose(digits);
            c++;
        }

    }
    fclose(argv[1]);
}
