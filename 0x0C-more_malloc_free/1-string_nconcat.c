#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates first string followed by at least
 * n bytes of the second string
 * @s1: First string
 * @s2: Second string
 * @n: Size to concatenate
 * Return: Pointer to the new string or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1;
	unsigned int size2;
	unsigned int min;
	unsigned int size;
	char *res;

	if (s1 == NULL)
		size1 = 0;
	else
		size1 = strlen(s1);

	if (s2 == NULL)
		size2 = 0;
	else
		size2 = strlen(s2);

	min = (n < size2 ? n : size2);
	size = size1 + min;
	res = malloc(sizeof(char) * size + 1);
	res[size] = '\0';
	if (!res)
		return (NULL);
	if (s1 != NULL)
		strncpy(res, s1, size1);
	if (s2 != NULL)
		strncpy(res + size1, s2, min);
	return (res);
}
