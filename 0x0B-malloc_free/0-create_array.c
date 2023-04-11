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

	if (size == 0)
		return (NULL);
	result = malloc(size * sizeof(char));
	if (result == NULL)
		return (NULL);

	while (size > 0)
	{
		size--;
		result[size] = c;
	}
	return (result);
}
