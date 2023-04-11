#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * Return: Pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	unsigned int i, size1 = 0, size2 = 0;

	if (s1 != NULL)
		while (*(s1 + size1))
			size1++;
	if (s2 != NULL)
		while (*(s2 + size2))
			size2++;

	result = malloc((size1 + size2) * sizeof(char) + 1);
	for (i = 0; i < size1; i++)
		result[i] = s1[i];
	for (; i < size1 + size2; i++)
		result[i] = s2[i];
	result[i] = '\0';
	return (result);
}
