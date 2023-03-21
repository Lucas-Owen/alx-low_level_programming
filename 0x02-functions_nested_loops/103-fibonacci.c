#include <stdio.h>
/**
 * main - prints the sum of first even fibonacci numbers not exceeding
 * 4,000,000
 *
 * Return: 0
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int temp;
	int sum = 0;
	int limit = 4000000;

	while (a <= limit)
	{
		if (a % 2 == 0)
		{
			sum += a;
		}
		temp = a + b;
		a = b;
		b = temp;
	}
	printf("%d\n", sum);
	return (0);
}
