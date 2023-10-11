#include "search_algos.h"

/**
 * exponential_search - searches for a value in an array of integers using
 * the Exponential search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the index where value is located or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i, m, l = 0, r = 1;

	if (!array || !size)
		return (-1);
	while (r < size && array[r] < value)
	{
		l = r;
		printf("Value checked array[%ld] = [%d]\n", r, array[r]);
		r *= 2;
	}
	if (r >= size)
		r = size - 1;
	printf("Value found between indexes [%ld] = [%ld]\n", l, r);
	while (l <= r)
	{
		printf("Searching in array:");
		printf(" %d", array[l]);
		for (i = l + 1; i <= r; i++)
			printf(", %d", array[i]);
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
