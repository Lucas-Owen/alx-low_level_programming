#include <stdio.h>
#include "main.h"

/**
 * main - Fizz-Buzz
 * Return: Always (0)
 */
int main(void)
{
	int i, n = 100;

	for (i = 1; i <= n; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i < n)
			putchar(' ');
	}
	putchar('\n');
}
