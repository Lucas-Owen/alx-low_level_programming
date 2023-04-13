#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates first string followed by at least
 * n bytes of the second string
 * @s1: First string
 * @s2: Second string
 * Return: Pointer to the new string or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1 = strlen(s1);
	unsigned int size2 = strlen(s2);
	unsigned int min = (n < size2 ? n : size2);
	unsigned int size = size1 + min;
	char *res = malloc(sizeof(char) * size + 1);

	if (!res)
		return (NULL);
	strncpy(res, s1, size1);
	strncpy(res + size1, s2, min);
	return (res);
}
