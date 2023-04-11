#include <stdlib.h>

/**
 * create_array - Creates a char array and initializes with c
 * @size: Size of array
 * @c: Initialization value
 * Return: Pointer to the array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *result;
	int i;

	if (size == 0)
		return (NULL);
	result = malloc(size * sizeof(char));
	if (result == NULL)
		return (NULL);
	for (i = size - 1; i >= 0; i--)
		result[i] = c;
	return (result);
}
