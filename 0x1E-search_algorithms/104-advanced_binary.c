#include "search_algos.h"

/**
 * binary_search_recursive - searches for a value in an array of integers using
 * the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @value: is the value to search for
 * @lo: Lower bound
 * @hi: Upper bound
 * Return: the first index where value is located or -1
 */
int binary_search_recursive(int *array, int value, long lo, long hi)
{
	long m = (lo + hi) / 2, i;

	if (hi < lo)
		return (-1);
	printf("Searching in array:");
	printf(" %d", array[lo]);
	for (i = lo + 1; i <= hi; i++)
		printf(", %d", array[i]);
	printf("\n");
	if (array[m] == value)
	{
		if (m - 1 >= 0 && array[m - 1] == value)
			return (binary_search_recursive(array, value, lo, m));
		return (m);
	}
	if (array[m] < value)
		return (binary_search_recursive(array, value, m + 1, hi));
	return (binary_search_recursive(array, value, lo, m - 1));
}

/**
 * advanced_binary - searches for a value in an array of integers using
 * the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || !size)
		return (-1);
	return (binary_search_recursive(array, value, 0, size - 1));
}
