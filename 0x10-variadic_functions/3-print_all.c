#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/**
 * count_specifiers - Counts the number of valid specifiers
 * @types: list of chars
 * Return: number of valid specifiers (c, i, f, s)
 */
int count_specifiers(const char * const types)
{
	int i = 0, n = 0;

	while (types[i])
	{
		switch (types[i])
		{
			case 'c':
			case 'i':
			case 'f':
			case 's':
				n++;
				break;
			default:
				break;
		}
		i++;
	}
	return (n);
}

/**
 * print_args - Does the actual printing of the arguments and format
 *
 * @args: variable list of arguments
 * @c: A format specifier
 * Return: Whether any printing happened or not (1 or 0)
 */
int print_args(va_list *args, char c)
{
	char *arg;

	switch (c)
	{
		case 'c':
			printf("%c", va_arg(*args, int));
			return (1);
		case 'i':
			printf("%d", va_arg(*args, int));
			return (1);
		case 'f':
			printf("%f", va_arg(*args, double));
			return (1);
		case 's':
			arg = va_arg(*args, char*);
			switch ((long) arg)
			{
				case 0:
					printf("(nil)");
					break;
				default:
					printf("%s", arg);
			}
			return (1);
		default:
			return (0);
	}
}
/**
 * print_all - Prints anythingn based on format specified
 * @format: List of types of arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int n = 0, i = 0, printed;

	if (format == NULL)
		return;
	va_start(args, format);
	n = count_specifiers(format);
	while (*(format + i))
	{
		printed = print_args(&args, *(format + i));
		if (printed)
			n--;
		if (n && printed)
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}
