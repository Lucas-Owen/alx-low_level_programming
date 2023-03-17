#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	int i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
