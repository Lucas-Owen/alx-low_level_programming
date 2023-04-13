#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: Minimum
 * @max: Maximum
 * Return: Pointer to the array or NULL
 */
int *array_range(int min, int max)
{
	int *array;
	unsigned int i, size;

	if (min > max)
		return (NULL);

	size = (unsigned int) (max - min + 1);
	array = malloc(sizeof(int) * size);
	if (!array)
		return (NULL);

	for (i = 0; min <= max; min++, i++)
		array[i] = min;
	return (array);
}
