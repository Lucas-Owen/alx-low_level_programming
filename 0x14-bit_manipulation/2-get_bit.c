#include "main.h"

/**
 * get_bit - Get the bit at the specified index
 * @n: The number to extract a bit from
 * @index: Index of the bit to get
 * Return: The bit, or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits = sizeof(unsigned long int);

	return index >= size ? -1 : ((n >> index) & 1);
}
