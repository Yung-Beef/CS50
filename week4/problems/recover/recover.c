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



    // while fread doesn't return < 1, read the file, if blah blah output, then increase the read location by 512 (handled by fread)

    char *temp[512];
    char *digits[3];
    int i = 0;

    while (fread(temp, 1, 512, file) == 0)
    {
        fread(temp, 512, 1, file);

        if (temp[0] = 0xff && temp[1] = 0xd8 && temp[2] = 0xff)
        {
            sprintf(digits, "%03i.jpg", i);
            FILE *img = fopen(digits, "w");
            // fwrite the temp file data into a new file whose name changes as this loops
            fwrite(temp, 512, 1, digits);

            // what if the jpg is bigger than 512 bytes???????



            fclose(digits);
            i++;
        }
    }

    fclose(argv[1]);
}
