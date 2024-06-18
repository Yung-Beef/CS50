#include <stdio.h>
#include <stdint.h>

type uint8_t BYTE;

int main(int argc, char *argv[])
{
    FILE *src = fopen(argv[1], "rb"); //read binary
    FILE *dst = fopen(argv[2], "wb"); //write binary

    BYTE b;

    while (fread(&b, sizeof(b), 1, src) != 0)
    {
        fwrite(&b, sizeof(b), 1, dst);
    }

    fclose(src);
    fclose(dst);
}
