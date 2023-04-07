#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers passed as arguments and prints the result
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: (0) on Success, (1) on error
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		puts("Error");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
