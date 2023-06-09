#include <stdio.h>
#include <string.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - Performs simple arithmetic operations
 * @argc: Length of argv
 * @argv: Array of arguments
 * Return: (0) on Success, exits with status 98 on failure
 */
int main(int argc, char **argv)
{
	int a, b;

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (!(strcmp(argv[2], "+") == 0
				|| strcmp(argv[2], "-") == 0
				|| strcmp(argv[2], "*") == 0
				|| strcmp(argv[2], "/") == 0
				|| strcmp(argv[2], "%") == 0))
	{
		puts("Error");
		exit(99);
	}

	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && b == 0)
	{
		puts("Error");
		exit(100);
	}

	printf("%d\n", get_op_func(argv[2])(a, b));
	return (0);
}
