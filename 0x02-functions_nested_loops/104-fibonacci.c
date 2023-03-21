#include <stdio.h>
/**
 * main - prints first 98 fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	int counter = 0;
	long a = 1;
	long b = 2;
	long temp;

	while (counter < 98)
	{
		counter++;
		if (counter == 98)
		{
			printf("%ld\n", a);
		}
		else
		{
			printf("%ld, ", a);
		}

		temp = a + b;
		a = b;
		b = temp;
	}
	return (0);
}
