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
    char *digits[3];

    while (fread(&temp, 1, 512, file) == 512)
    {
        for (int i = 0, i < 50; i++)
        {
            fread(&temp, 1, 512, file);

            if (temp[0] = 0xff && temp[1] = 0xd8 && temp[2] = 0xff)
            {
                sprintf(digits, "%03i.jpg", i);
                FILE *img = fopen(digits, "w");
                fwrite(&temp, 512, 1, digits);
                // keep writing until it finds the header again
                // don't include that, close the file
            }
        }
    }
    fclose(argv[1]);
}
