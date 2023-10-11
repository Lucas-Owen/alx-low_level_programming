#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches for a value in an array of integers using
 * the Jump search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the index where value is located or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, step = sqrt(size), k = 0;

	if (!array || !size)
		return (-1);
	for (i = 0; i < size && array[i] < value; i += step, k++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value found between indexes [%ld] and [%ld]\n", i - step, i);
	for (i -= step; i < size && i < k * step; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
