#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned int
 * @b: The binary number
 * Return: The unsigned int or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0, num = 0, i = 0;

	if (b == NULL)
		return (num);
	while (b[len])
	{
		if (b[len] == '1' || b[len] == '0')
			len++;
		else
			return (num);
	}
	while (len > 0)
		num &= (b[--len] - '0') << i++;
	return (num);
}
