#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings passed as arguments followed by a new line
 * @separator: String to be printed between numbers
 * @n: Number of integers passed
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int i;
	char *arg;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		arg = va_arg(args, (char *));
		if (arg)
			printf("%s", arg);
		else
			printf("(nil)");
		if (i + 1 != n)
			if (separator)
				printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
