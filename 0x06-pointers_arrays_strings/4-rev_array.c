#include "main.h"

/**
 * reverse_array - Reverses an array
 * @a: Pointer to an int array
 * @n: number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int half = n / 2, temp;
	int *last = a + n - 1;

	for (; half > 0; half--, a++, last--)
	{
		temp = *a;
		*a = *last;
		*last = temp;
	}
}
