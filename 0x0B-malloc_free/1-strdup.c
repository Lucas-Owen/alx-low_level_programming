#include <stdlib.h>

/**
 * _strdup - Copies a string and returns a pointer to the new string
 * @str: The string to be copied
 * Return: A pointer to a new string or NULL
 */
char *_strdup(char *str)
{
	char *result;
	unsigned int size = 0;

	if (str == NULL)
		return (NULL);
	while (*(str + size))
		size++;
	result = malloc(size * sizeof(char) + 1);
	if (result == NULL)
		return (NULL);
	result[size] = '\0';
	while (size > 0)
	{
		size--;
		result[size] = str[size];
	}
	return (result);
}
