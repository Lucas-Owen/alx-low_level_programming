#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: Pointer to string to be printed
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i++));
	}
	_putchar('\n');
}
