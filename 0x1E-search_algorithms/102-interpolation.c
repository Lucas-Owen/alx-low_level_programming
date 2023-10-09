#include <math.h>
#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of integers using
 * the Interpolation search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t l = 0, probe, r = size - 1;

	if (!array || !size)
		return (-1);
	while (l < r)
	{
		probe = l + (double) (value - array[l]) / (array[r] - array[l]) * (r - l);
		if (probe > size)
		{
			printf("Value checked array[%ld] is out of range\n", probe);
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", probe, array[probe]);
		if (array[probe] == value)
			return (probe);
		if (array[probe] < value)
			l = probe + 1;
		else
			r = probe - 1;
	}
	return (-1);
}
