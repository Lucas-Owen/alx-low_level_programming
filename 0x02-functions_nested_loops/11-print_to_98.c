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
	if (n > 98)
		return;
	for (int i = n; i <= 98; i++)
	{
		printf("%d", i);
		if (i == 98)
			putchar('\n');
		else
			printf(", ");
	}
}
