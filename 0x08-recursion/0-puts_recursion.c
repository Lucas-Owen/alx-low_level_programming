#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: The string
 * Return: Void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
		return;
	}
	_putchar('\n');
}
