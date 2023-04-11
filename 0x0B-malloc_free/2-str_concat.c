#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * Return: Pointer to the new string or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	unsigned size1 = 0, size2 = 0;

	if (s1 != NULL)
		while (*(s1 + size1))
			size1++;
	if (s2 != NULL)
		while (*(s2 + size2))
			size2++;

	result = malloc((size1 + size2) * sizeof(char) + 1);
	if (result == NULL)
		return (NULL);

	result[size1 + size2] = '\0';
	while (size2 > 0)
	{
		size2--;
		result[size1 + size2] = s2[size1 + size2];
	}
	while (size1 > 0)
	{
		size1--;
		result[size1] = s1[size1];
	}
	return (result);
}
