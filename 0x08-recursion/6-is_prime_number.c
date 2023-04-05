#include "main.h"

/**
 * is_prime_number_helper - A helper for is_prime_number
 * @n: The number
 * @i: Counter
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number_helper(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime_number_helper(n, i + 1));
}
/**
 * is_prime_number - Checks if n is prime
 * @n: The integer
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime_number_helper(n, 2));
}
