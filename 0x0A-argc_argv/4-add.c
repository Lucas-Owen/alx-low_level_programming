#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * main - Adds numbers passed as arguments and prints the result
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: (0) on Success, (1) on error
 */
int main(int argc, char *argv[])
{
	int result = 0;
	char *endptr;

	while (argc > 0)
	{
		endptr = NULL;
		argc--;
		result += strtol(argv[argc], &endptr, 10);

		if (endptr)
		{
			puts("Error");
			return (1);
		}
	}

	printf("%d\n", result);

	return (0);
}
