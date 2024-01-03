#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./recover IMAGE");
        return 1;
    }

    else
    {
        // Open card
        char *input_file_name = argv[1];
        FILE *raw_file = fopen(argv[1], "r");
        if (raw_file == NULL)
        {
            printf("Error: cannot open %s\n", input_file_name);
            return 2;
        }

        // Create a buffer to store the read data
        BYTE buffer[512];
        // Specify the size and number of elements to read
        size_t BLOCK_SIZE = 512;
        int jpg_count = 0;
        FILE *img_pointer = NULL;
        char filename[50];

        // Repeat until end of card
        while (fread(&buffer, BLOCK_SIZE, 1, raw_file) == 1)
        {
            // check for  start of a new JPEG (0xff 0xd8 0xff 0xe*):
            if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
            {
                // If not first JPEG, close previous one
                if (!(jpg_count == 0))
                {
                    fclose(img_pointer);
                }
                // Initialise file
                sprintf(filename, "%03i.jpg", jpg_count);
                img_pointer = fopen(filename, "w");
                jpg_count++;
            }
            // If JPEG has been found, write to file
            if (!(jpg_count == 0))
            {
                fwrite(&buffer, 512, 1, img_pointer);
            }
        }
        fclose(raw_file);
        fclose(img_pointer);
        return 0;
    }
}

