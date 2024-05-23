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
    int sepiaRed = 0;
    int sepiaGreen = 0;
    int sepiaBlue = 0;

    // go through each pixel with 2 loops
    for (int i = 0; i < height; i++)
        {
            for (int j = 0; j < width; j++)
            {
                // update the rgb values of each pixel
                sepiaRed = (.393 * image[i][j].rgbtRed) + .769 * (image[i][j].rgbtGreen) + .189 * (image[i][j].rgbtBlue);
                if (sepiaRed > 255)
                {
                    sepiaRed = 255;
                }
                image[i][j].rgbtRed = sepiaRed;

                sepiaGreen = .349 * (image[i][j].rgbtRed) + .686 * (image[i][j].rgbtGreen) + .168 * (image[i][j].rgbtBlue);
                if (sepiaGreen > 255)
                {
                    sepiaGreen = 255;
                }
                image[i][j].rgbtGreen = sepiaGreen;

                sepiaBlue = .272 * (image[i][j].rgbtRed) + .534 * (image[i][j].rgbtGreen) + .131 * (image[i][j].rgbtBlue);
                if (sepiaBlue > 255)
                {
                    sepiaBlue = 255;
                }
                image[i][j].rgbtBlue = sepiaBlue;

            }
        }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{

    // go through each row with a loop
    // save the entire row to temp memory
    // use another i-- loop to flip it

    char *temp = malloc(6 * width);

    // go through each row
    for (int i = 0; i < height; i++)
    {
        // save the row to memory
        for (int j = 0; j < width; j++)
        {
            temp[j] = image[i][j];
        }
        // flip it and save it
        for (int n = 0; n < width; n++)
        {
            image[i][n] = temp[width - n];
        }
    }
    free(temp);

    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{

    // go through each pixel with 2 loops
    RGBTRIPLE copy[height][width];
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            


            copy[i][j].rgbtRed = (image[i - 1][j - 1].rgbtRed + image[i - 1][j].rgbtRed + image[i - 1][j + 1].rgbtRed +
                                  image[i][j - 1].rgbtRed + image[i][j].rgbtRed + image[i][j + 1].rgbtRed +
                                  image[i + 1][j - 1].rgbtRed + image[i + 1][j].rgbtRed + image[i + 1][j + 1].rgbtRed);

            copy[i][j].rgbtBlue = (image[i - 1][j - 1].rgbtBlue + image[i - 1][j].rgbtBlue + image[i - 1][j + 1].rgbtBlue +
                                  image[i][j - 1].rgbtBlue + image[i][j].rgbtBlue + image[i][j + 1].rgbtBlue +
                                  image[i + 1][j - 1].rgbtBlue + image[i + 1][j].rgbtBlue + image[i + 1][j + 1].rgbtBlue);

            copy[i][j].rgbtGreen = (image[i - 1][j - 1].rgbtGreen + image[i - 1][j].rgbtGreen + image[i - 1][j + 1].rgbtGreen +
                                  image[i][j - 1].rgbtGreen + image[i][j].rgbtGreen + image[i][j + 1].rgbtGreen +
                                  image[i + 1][j - 1].rgbtGreen + image[i + 1][j].rgbtGreen + image[i + 1][j + 1].rgbtGreen);
        }
    }



    return;
}
