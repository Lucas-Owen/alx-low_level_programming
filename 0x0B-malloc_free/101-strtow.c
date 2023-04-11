#include <stdlib.h>
#include <string.h>
/**
 * number_of_words - Counts the number of words in str
 * @str: The string
 * Return: Number of words separated by spaces
 */
int number_of_words(char *str)
{
	int words = 0;
	while (*str)
	{
		while (*str == ' ')
			str++;
		if (*str)
			words++;
		while (*str != 0 && *str != ' ')
			str++;
	}
	return (words);
}

/**
 * strtow - Converts a string to words - delimiter is space
 * @str: The string
 * Return: Pointer to an array of strings or NULL
 */
char **strtow(char *str)
{
	char **result, *temp = str;
	unsigned int size, words, i;

	if (str == NULL || strlen(str) == 0)
		return (NULL);
	words = number_of_words(str);
	if (words == 0)
		return (NULL);
	result = malloc(words * sizeof(char *) + 1);
	if (result == NULL)
		return (NULL);

	for (i = 0; i < words; i++)
	{
		while (*temp == ' ')
			temp++;
		size = 0;
		while (*temp != 0 && *temp != ' ')
		{
			size++;
			temp++;
		}
		if (size > 0)
		{
			result[i] = malloc(size * sizeof(char) + 1);
			if (result[i] == NULL)
			{
				while (i > 0)
				{
					i--;
					free(result[i]);
				}
				free(result);
			}
			strncpy(result[i], temp - size, size);
		}
	}
	result[i] = NULL;
	return (result);
}
