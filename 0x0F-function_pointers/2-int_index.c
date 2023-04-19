#include <stddef.h>
/**
 * int_index - Searches for an integer in an array
 * based on a custom function
 * @array: The array
 * @size: Size of the array
 * @cmp: Compare function
 * Return: The index of integer if found, else (-1)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL || array == NULL)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
