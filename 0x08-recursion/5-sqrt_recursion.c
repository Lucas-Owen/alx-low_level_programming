#include "main.h"

/**
 * _sqrt_recursion_helper - Helper for computing square root of n
 * @n: The positive integer
 * @i: A counter
 * Return: The natural square root of n or -1
 */
int _sqrt_recursion_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i < n)
		return (_sqrt_recursion_helper(n, i + 1));
	return (-1);
}

/**
 * _sqrt_recursion - Computes the natural square root of a number
 * @n: A positive integer
 * Return: The square root of n or -1
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion_helper(n, 0));
}
