#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    int line = 1;
    int j;
    //Conditional to only accept numbers between 1 and 8
    do
    {
        height = get_int("What's the piramid height? ");
    }
    while (height < 1 || height > 8);
    int x = height;
    while (line <= height)
    {
        //The number of spaces on the left of the pyramid is equal to the height - the current line
        //so on a pyramid with a height of 4, on the first line there will be 3 spaces
        x = x - 1;
        //Conditional to add in the spaces on the left of the pyramid
        for (j = 0; j < x; j++)
        {
            printf(" ");
        }
        //Add in the  left pyramid hashes, number of hashes = the current line
        for (j = 0; j < line; j++)
        {
            printf("#");
        }
        //Space in the middle
        printf("  ");
        //Right part of the pyramid
        for (j = 0; j < line; j++)
        {
            printf("#");
        }

        printf("\n");
        line += 1;
    }
}