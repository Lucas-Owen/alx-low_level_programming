#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of main
 * @argc: Length of argv
 * @argv: Arguments array
 * Return: (0) on success, exits and sets status otherwise
 */
int main(int argc, char **argv)
{
	int bytes;
	char *f = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes <= 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (; bytes > 0; bytes--)
	{
		printf("%02hhx", *f);
		if (bytes - 1)
			printf(" ");
		f++;
	}
	printf("\n");
}
