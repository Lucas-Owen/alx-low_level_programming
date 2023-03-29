#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - prints contents of size bytes of the buffer
 * 10 bytes per line
 * Each line starts with the position of the first byte of
 * the line in hexadecimal (8 chars), starting with 0
 * @b: buffer
 * @size: size
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i, j, printed, lines;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}
	for (j = 0, lines = 0; j < size; lines++)
	{
		printf("%08x: ", j);
		printed = 0;
		for (i = 0; i < 10 && j < size; i++, j++)
		{
			printf("%02x", *(b + i));
			if ((i % 2))
				printf(" ");
			printed++;
		}
		for (; i < 10; i++)
		{
			printf("%2c", ' ');
			if (i % 2)
				printf(" ");
		}
		for (; printed >= 0; printed--, b++)
		{
			if (isprint(*b))
				printf("%c", *b);
			else
				printf(".");
		}
		printf("\n");
	}
}
