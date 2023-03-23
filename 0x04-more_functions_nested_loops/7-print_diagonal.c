#include "main.h"

/**
 * print_diagonal - draws a diagonal on the terminal with '\'
 * @n: number of times '\' should be repeated
 * Return - void
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j == n - 1)
			{
				_putchar('\\');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
