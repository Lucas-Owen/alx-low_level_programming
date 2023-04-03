#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: A pointer to an integer (Really a pointer to an array of ints)
 * @size: Dimension of the square matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, d1 = 0, d2 = 0;

	for (i = 0; i < size; i++)
	{
		d1 += *(a + i * size + i);
		d2 += *(a + (size - 1 - i) * size + i);
	}

	printf("%d, %d\n", d1, d2);
}
