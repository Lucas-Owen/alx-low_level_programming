#include <stdlib.h>

/**
 * _calloc - Allocates memory of nmemb elements of size bytes each
 * and sets the memory to 0
 * @nmemb: Number of elements
 * @size: Size of each element
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *res;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	res = malloc(nmemb * size);
	if (!res)
		return (NULL);
	for (i = 0; i < size * nmemb; i++)
		res[i] = 0;
	return (res);
}