#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * followed b a new line
 * @a: Pointer to an array
 * @n: Number of elements to print
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
