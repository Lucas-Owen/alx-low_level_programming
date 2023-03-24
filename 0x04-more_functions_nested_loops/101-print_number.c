#include "main.h"

/**
 * print_number - Prints an integer number
 * @n: The number
 * Return: void
 */
void print_number(int n)
{
	int factor = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (factor < n)
	{
		factor *= 10;
	}

	factor /= 10;

	while (factor > 0)
	{
		_putchar(n / factor + '0');
		n %= factor;
		factor /= 10;
	}
}
