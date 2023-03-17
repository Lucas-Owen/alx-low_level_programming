#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 * The numbers should range from 0 to 99
 * The two numbers should be separated by a space
 * All numbers should be printed with two digits. 1 should be printed as 01
 * The combination of numbers must be separated by comma, followed by a space
 * The combinations of numbers should be printed in ascending order 00 01 and
 * 01 00 are considered as the same combination of the numbers 0 and 1
 *
 * Return: 0
 */
int main(void)
{
	int i = '0';
	int j, k, l;

	while (i <= '9')
	{
		j = '0';

		while (j <= '9')
		{
			k = i;
			l = j + 1;
			while (k <= '9')
			{
				while (l <= '9')
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (!(i == '9' && j == '8' && k == '9' && l == '9'))
					{
						putchar(',');
						putchar(' ');
					}
					l++;
				}
				l = '0';
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
