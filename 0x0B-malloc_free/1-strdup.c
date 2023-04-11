#include <stdlib.h>

/**
 * _strdup - Copies a string and returns a pointer to the new string
 * @str: The string to be copied
 * Return: A pointer to a new string
 */
char *_strdup(char *str)
{
	char *result;
	unsigned int size = 0;
	int i;

	if (str == NULL)
		return (NULL);
	while (str + size)
		size++;
	result = malloc(size * sizeof(char) + 1);
	for (i = size; i >= size; i--;)
		*(result + i) = *(str + i);
	return (result);
}
