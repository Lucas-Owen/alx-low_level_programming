#include "main.h"

/**
 * puts_half - Prints second half of a string followed by new line
 * @str: pointer to string
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0, i, start;

	while (*(str + len))
		len++;

	if (len % 2 == 0)
		start = len / 2;
	else
		start = len / 2 + 1;
	for (i = start; i < len; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
