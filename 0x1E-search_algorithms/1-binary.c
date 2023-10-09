#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers using
 * the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the index where value is located or -1
 */
int binary_search(int *array, size_t size, int value)
{
	long int i, m, l = 0, r = size - 1;

	if (!array || !size)
		return (-1);
	while (l <= r)
	{
		printf("Searching in array:");
		for (i = l; i <= r; i++)
			printf(" %d", array[i]);
		printf("\n");
		m = (l + r) / 2;
		if (array[m] == value)
			return (m);
		if (array[m] < value)
			l = m + 1;
		else
			r = m - 1;
	}
	return (-1);
}
