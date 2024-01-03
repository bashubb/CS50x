#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>

int find_index(char letter);
bool key_validation(string key);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
	printf("Usage: ./substitution key\n");
	return 1;
    }
    else if (strlen(argv[1]) != 26)
    {
	printf("Key must contain 26 characters.\n");
	return 1;
    }
    else if (key_validation(argv[1]) == false)
    {
	return 1;
    }
    else
    {
	string plaintext = get_string("plaintext: ");

	for (int i = 0; i < strlen(plaintext); i++)
	{

	    // check if it's letter
	    if (isalpha(plaintext[i]))
	    {

		// find an index in the alphabeth
		int index = find_index(plaintext[i]);

		// decode with case sensitive
		if (isupper(plaintext[i]))
		{
		    plaintext[i] = toupper(argv[1][index]);
		}
		else
		{
		    plaintext[i] = tolower(argv[1][index]);
		}
	    }
	    else
	    {
		continue;
	    }
	}

	printf("ciphertext: %s\n", plaintext);
    }
}

int find_index(char letter)
{
    int index = tolower(letter) - 'a';
    return index;
}

bool key_validation(string key)
{
    for (int i = 0; i < strlen(key); i++)
    {
	if (isalpha(key[i]) == false)
	{
	    return false;
	}
	int counter = 0;
	for (int j = 0; j < strlen(key); j++)
	{
	    if (tolower(key[i]) == tolower(key[j]))
	    {
		counter++;
		if (counter > 1)
		{
		    return false;
		}
	    }
	}
    }
    return true;
}
