#include "helpers.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    // image[height][width].rgbtBlue gives the blue value of that pixel

    float temp = 0.00;

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
                sepiaRed = (.393 * image[i][j].rgbtRed) + (.769 * image[i][j].rgbtGreen) + (.189 * image[i][j].rgbtBlue);
                if (sepiaRed > 255)
                {
                    sepiaRed = 255;
                }
                image[i][j].rgbtRed = sepiaRed;

                sepiaGreen = (.349 * image[i][j].rgbtRed) + (.686 * image[i][j].rgbtGreen) + (.168 * image[i][j].rgbtBlue);
                if (sepiaGreen > 255)
                {
                    sepiaGreen = 255;
                }
                image[i][j].rgbtGreen = sepiaGreen;

                sepiaBlue = (.272 * image[i][j].rgbtRed) + (.534 * image[i][j].rgbtGreen) + (.131 * image[i][j].rgbtBlue);
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

    RGBTRIPLE temp[width];

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
            image[i][n] = temp[width - n - 1];
        }
    }

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
            copy[i][j] = image[i][j];
        }
    }

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int totalRed = 0, totalBlue = 0, totalGreen = 0;
            float counter = 0.00;

            for (int x = -1; x < 2; x++)
            {
                for (int y = -1; y < 2; y++)
                {
                    int currentX = i + x;
                    int currentY = j + y;

                    if (currentX < 0 || currentX > (height - 1) || currentY < 0 || currentY > (width - 1))
                    {
                        continue;
                    }
                    else
                    {
                        totalRed += image[currentX][currentY].rgbtRed;
                        totalGreen += image[currentX][currentY].rgbtGreen;
                        totalBlue += image[currentX][currentY].rgbtBlue;
                        counter += 1;
                    }
                }
            }

            copy[i][j].rgbtRed = (totalRed / counter);
            copy[i][j].rgbtGreen = (totalGreen / counter);
            copy[i][j].rgbtBlue = (totalBlue / counter);
        }
    }

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            image[i][j] = copy[i][j];
        }
    }

    return;
}
