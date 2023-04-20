#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers passed as arguments followed by a new line
 * @separator: String to be printed between numbers
 * @n: Number of integers passed
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i + 1 != n)
			if (separator)
				printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
