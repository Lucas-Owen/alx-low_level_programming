#include "main.h"

/**
 * puts_half - Prints second half of a string followed by new line
 * @str: pointer to string
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0, i;

	while (*(str + len))
		len++;

	for (i = len / 2; i < len; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
