#include "main.h"

/**
 * print_line - prints a line with '_' in terminal
 * ending with a newline
 * @n: number of times '_' should be printed
 * Return - void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
