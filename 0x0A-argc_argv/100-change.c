#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the number of coins required to make change for an amount
 * passed as command line argument
 * @argc: Count of arguments
 * @argv: Array of arguments
 * Return: (0) on Success, (1) on Error
 */
int main(int argc, char *argv[])
{
	int cents, count;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		puts("0");
		return (1);
	}

	count = 0;
	count += cents / 25;
	cents %= 25;
	count += cents / 10;
	cents %= 10;
	count += cents / 5;
	cents %= 5;
	count += cents / 2;
	cents %= 2;
	count += cents;

	printf("%d\n", count);
	return (0);
}
