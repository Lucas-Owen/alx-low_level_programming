#include <stdio.h>

/**
 * is_prime - Checks if an integer is prime
 * @n: The integer
 * Return: (1) if prime, (0) otherwise
 */
int is_prime(long n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);

	long i;

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
			return (0);
	}

	return (1);
}

/**
 * main - finds and prints the largest prime factor
 * of 612852475143 followed by a new line
 * Return: Always (0)
 */
int main(void)
{
	long num = 612852475143;
	long i, largest;

	for(i = 2; i <= num / 2; i++)
	{
		if (is_prime(i))
		{
			if(num % i == 0)
				largest = i;
			while (num % i == 0)
			{
				printf("%ld - ", num);
				num /= i;
			}
		}
	}
	printf("%ld\n", largest);

	return (0);
}
