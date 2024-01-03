#include <cs50.h>
#include <stdio.h>

int start_size(void);
int end_size(int start);

//main function - calculates and printes number of years to get from starting to ending size
int main(void)
{
    int start = start_size();
    int end = end_size(start);


    int how_many_years = 0;
    if (start < end)
    {
        while (start < end)
        {
            int year_result = (start / 3) - (start / 4);
            start += year_result;
            how_many_years ++;
        }
    }

    printf("Years: %i\n", how_many_years);
}


// geting start size of population from user
int start_size(void)
{
    int start;
    do
    {
        start = get_int("Start size: ");
    }
    while (start < 9);
    return start;
}


//geting ending size of population from user
int end_size(int start)
{
    int end;
    do
    {
        end = get_int("End size: ");
    }
    while (end < start);
    return end;
}