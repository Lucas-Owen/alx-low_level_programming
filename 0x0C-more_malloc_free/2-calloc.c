#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory of nmemb elements of size bytes each
 * and sets the memory to 0
 * @nmemb: Number of elements
 * @size: Size of each element
 * Return: Pointer to the new block
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *res;
	unsigned int i;
	char val = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	res = malloc(nmemb * size);
	if (!res)
		return (NULL);
	for (i = 0; i < size * nmemb; i++)
		memcpy((char *) res + i, &val, 1);
	return (res);
}
