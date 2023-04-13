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
	unsigned int size = size1 + (n < size2 ? n : size2) + 1;
	char *res = malloc(sizeof(char) * size);

	if (!res)
		return (NULL);
	strncpy(res, s1, size1);
	strncpy(res + size1, s2, size2);
	return (res);
}