#include "main.h"
/**
 * print_last_digit - prints and returns the
 * last digit of a number
 *
 * @n: int - the number
 *
 * Return: the last digit of the number
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = n % -10;
		n = -n;
	}
	else
	{
		n = n % 10;
	}
	_putchar(n + '0');
	return (n);
}
