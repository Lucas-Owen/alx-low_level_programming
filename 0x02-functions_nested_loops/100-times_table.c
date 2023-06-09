#include <stdio.h>
#include "main.h"
/**
 * print_times_table - prints n times table starting with 0
 *
 * @n: dimension of the table
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i, j;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j == 0)
			{
				printf("%d", i * j);
			}
			else
			{
				printf(", %3d", i * j);
			}
		}
		putchar('\n');
	}
}
