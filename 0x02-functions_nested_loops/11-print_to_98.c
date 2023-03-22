#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints comma separated numbers from n to 98
 *
 *@n: starting number
 *
 * Return: the sum of the two integers
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i == 98)
				putchar('\n');
			else
				printf(", ");
		}
		return;
	}

	for (i = n; i <= 98; i++)
	{
		printf("%d", i);
		if (i == 98)
			putchar('\n');
		else
			printf(", ");
	}
}
