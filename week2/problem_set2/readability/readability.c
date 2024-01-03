#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_words(string text);
int count_letters(string text);
int count_sentences(string text);
int calculate_coleman(int letters, int words, int sentences);

int main(void)
{
    string text = get_string("Text: ");

    int index = calculate_coleman(count_letters(text), count_words(text), count_sentences(text));

    if (index > 16)
    {
	printf("Grade 16+\n");
    }
    else if (index < 1)
    {
	printf("Before Grade 1\n");
    }
    else
    {
	printf("Grade %i\n", index);
    }
}

int count_letters(string text)
{
    int n = strlen(text);
    int letters = 0;

    for (int i = 0; i < n; i++)
    {
	if (isalpha(text[i]))
	{
	    letters += 1;
	}
    }
    return letters;
}

int count_words(string text)
{
    int n = strlen(text);
    int words = 0;

    for (int i = 0; i < n; i++)
    {
	if (i == 0)
	{
	    continue;
	}

	// poprzedni jest litera i obecny jest pusty
	else if (isalpha(text[i - 1]) && isblank(text[i]))
	{
	    words += 1;
	}
	else if (isalpha(text[i - 1]) && (text[i] == '.' || text[i] == '!' || text[i] == '?' || text[i] == ','))
	{
	    words += 1;
	}
    }
    return words;
}

int count_sentences(string text)
{
    int n = strlen(text);
    int sentences = 0;

    for (int i = 0; i < n; i++)
    {
	if (i == 0)
	{
	    continue;
	}
	else if (isalpha(text[i - 1]) && (text[i] == '.' || text[i] == '!' || text[i] == '?'))
	{
	    sentences += 1;
	}
    }
    return sentences;
}

int calculate_coleman(int letters, int words, int sentences)
{
    float index = 0.0588 * ((float)letters / words * 100) - 0.296 * ((float)sentences / words * 100) - 15.8;

    return round(index);
}