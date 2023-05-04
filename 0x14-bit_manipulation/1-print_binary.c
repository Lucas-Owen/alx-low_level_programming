#include "main.h"

/**
 * print_binary - Prints an unsigned integer in binary
 * @n: The unsigned integer
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned int bits = sizeof(unsigned long int) * 8 - 1;

	while (!((n >> bits) & 1) && bits > 0)
		bits--;
	do {
		((n >> bits)) ? _putchar('1') : _putchar('0');
	} while (bits-- > 0);
}
