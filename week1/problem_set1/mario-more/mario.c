#include <cs50.h>
#include <stdio.h>

int height(void);
void print_pyramid(int height);


//Main
int main(void)
{
    print_pyramid(height());
}


//Function which asks for height of pyramid
int height(void)
{
    int pyramid_height;
    do
    {
        // Prompt user for height of pyramid
        pyramid_height = get_int("Height: ");
    }
    while (pyramid_height < 1 || pyramid_height > 8);

    return pyramid_height;
}


// Function which prints pyramid
void print_pyramid(int height)
{
    //Iterating rows
    for (int row = 1; row < height + 1 ; row++)
    {
        // Iterating characters
        for (int i = 0; i < height  ; i++)
        {
            // Checking for number of character in the row and making decision which of characters should be printed
            if ((i + row) == height || (i + row) > height)
            {
                printf("#");
            }
            else
            {
                printf(" ");
            }
        }
        // Printing mirror shape pyramid after two spaces
        printf("  ");
        for (int i = 0; i < row  ; i++)
        {
            printf("#");
        }
        printf("\n");
    }


}