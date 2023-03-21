#include "main.h"
/**
 * times_table - prints 9 times table starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, val;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			val = i * j;

			if (val < 10)
			{
				if (j != 0)
					_putchar(' ');
				_putchar(val + '0');
			}
			else
			{
				_putchar(val / 10 + '0');
				_putchar(val % 10 + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
