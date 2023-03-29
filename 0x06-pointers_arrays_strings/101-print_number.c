#include "main.h"

/**
 * print_number - Prints an integer number
 * @n: The number
 * Return: void
 */
void print_number(int n)
{
	int factor = 0;
	int temp, i;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	temp = n;
	do {
		factor++;
		temp /= 10;
	} while (temp > 0);


	for (; factor > 0; factor--)
	{
		temp = 1;
		for (i = factor; i > 1; i--)
		{
			temp *= 10;
		}
		_putchar(n / temp + '0');
		n %= temp;
	}
}
