#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 * Numbers must be separated by ',', followed by a space
 *
 * Return: 0
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		else
			putchar('\n');
		i++;
	}
	return (0);
}
