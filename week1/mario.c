#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Prompt user for a non-negative integer smaller than 24
    int height;
    do
    {
        height = get_int("Non-negative whole number smaller than 24: ");
    }
    while (height < 0 || height > 23);

    //Print rows
    for (int line = 0; line < height; line++)
    {
        int allSpacesInRow = height - 1 - line;
        int allHashesInRow = line + 2;

        //Print spaces
        for (int spaces = 0; spaces < allSpacesInRow; spaces++)
        {
            printf(" ");
        }

        //Print hashes
        for (int hashes = 0; hashes < allHashesInRow; hashes++)
        {
            printf("#");
        }

        //Print new line
        printf("\n");
    }
}
