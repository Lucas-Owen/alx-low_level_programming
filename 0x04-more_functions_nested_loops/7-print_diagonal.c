#include "main.h"

/**
 * print_diagonal - draws a diagonal on the terminal with '\'
 * @n: number of times '\' should be repeated
 * Return - void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
