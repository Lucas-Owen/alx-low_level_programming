#include "main.h"

/**
 * factorial - Computes the factorial of a number
 * @n: The number (a positive integer)
 * Return: The factorial of n or -1 on error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
