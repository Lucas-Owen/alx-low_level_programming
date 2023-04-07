#include <stdio.h>

/**
 * main - Prints all the arguments it receives, one per line
 * @argc: The number of arguments
 * @argv: The array of arguments
 * Return: Always (0)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		puts(argv[i]);

	return (0);
}
