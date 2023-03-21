#include "main.h"
/**
 * times_table - prints n times table starting with 0
 *
 * Return: void
 */
void print_times_table(int n)
{
	if (n > 15 || n < 0)
		return;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%4d", i*j);
		}
		putchar('\n');
	}
}
