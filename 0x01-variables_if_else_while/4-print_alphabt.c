#include <stdio.h>

/**
 * main - p prints the alphabet in lowercase, except q and e
 * followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		if (!(c == 'q' || c == 'e'))
			putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
