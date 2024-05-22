#include "helpers.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    // image[height][width].rgbtBlue gives the blue value of that pixel

    float temp;

    // go through each pixel
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            // set that pixel to be some shade of grey (average of the rgb)
            temp = (image[i][j].rgbtBlue + image[i][j].rgbtGreen + image[i][j].rgbtRed) / 3.0;
            image[i][j].rgbtBlue = temp;
            image[i][j].rgbtGreen = temp;
            image[i][j].rgbtRed = temp;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{

    // go through each pixel with 2 loops







    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{

    // go through each pixel with 2 loops




    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{

    // go through each pixel with 2 loops




    return;
}
