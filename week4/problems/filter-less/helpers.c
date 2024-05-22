#include "helpers.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    // image[height][width].rgbtBlue gives the blue value of that pixel

    LONG temp[3];

    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; i++)
        {
            image[i][j].rgbtBlue + image[i][j].rgbtGreen + image[i][j].rgbtRed
        }
    }

    // do the memory bullshit, each pixel's color is 3 bytes
    // for loop to go through each row i < height
        // for loop to go through each pixel of that row i < width
        // take the average of the BGR












    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
