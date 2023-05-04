#include "main.h"

/**
 * set_bit - set the bit to 1 at the specified index
 * @n: The number to set a bit from
 * @index: Index of the bit to set
 * Return: 1 if it worked, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bits = sizeof(unsigned long int) * 8;

	if (n == NULL)
		return (-1);
	if (index >= bits)
		return (-1);
	*n |= (1 << index);
	return (1);
}
