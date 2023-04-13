#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: Minimum
 * @max: Maximum
 * Return: Pointer to the array or NULL
 */
int *array_range(int min, int max)
{
	int *array, i;

	if (min > max)
		return (NULL);
	
	array = malloc(sizeof(int) * (max - min + 1));
	if (!array)
		return (NULL);

	for (i = 0; min <= max; min++, i++)
		array[i] = min;
	return (array);
}
