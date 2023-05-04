#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip
 * to get from n to m
 * @n: Number from
 * @m: Number to
 * Return: The number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int res = 0, i = 0, size = sizeof(unsigned long int);

	n ^= m;
	while (size > 0)
	{
		size--;
		res += ((n >> size) & 1);
	}
	return (res);
}
