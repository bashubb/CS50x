#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);
void decimal_to_binary(int decimal_letter);

int main(void)
{
    string text = get_string("Message: ");
    int text_length = strlen(text);

    for (int i = 0; i < text_length; i++)
    {
	decimal_to_binary((int)text[i]);
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
	// Dark emoji
	printf("\U000026AB");
    }
    else if (bit == 1)
    {
	// Light emoji
	printf("\U0001F7E1");
    }
}

void decimal_to_binary(int decimal_letter)
{
    int binary[BITS_IN_BYTE] = {0, 0, 0, 0, 0, 0, 0, 0};
    int binary_index = BITS_IN_BYTE - 1;

    while (decimal_letter != 0)
    {
	int bit = decimal_letter % 2;
	binary[binary_index] = bit;

	binary_index -= 1;
	decimal_letter /= 2;
    }

    for (int i = 0; i < BITS_IN_BYTE; i++)
    {
	print_bulb(binary[i]);
    }
    printf("\n");
}
