#include <stdio.h>

/**
 * main - prints alphabet from a-z in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
