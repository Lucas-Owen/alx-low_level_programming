#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/**
 * print_all - Prints anythingn based on format specified
 * @format: List of types of arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *types, *arg;
	int i = 0, n = 0;

	va_start(args, format);
	types = va_arg(args, (char *));
	/* Count number of valid format specifiers*/
	while (*types[i])
	{
		switch(*types[i])
		{
			case 'c':
			case 'i':
			case 'f':
			case 's': n++;
				break;
			default:
				break;
		}
		i++;
	}
	while (*types)
	{
		switch(*types)
		{
			case 'c': printf("%c", va_arg(args, char));
				n--;
				break;
			case 'i': printf("%d", va_arg(args, int));
				n--;
				break;
			case 'f': printf("%f", va_arg(args, double));
				n--;
				break;
			case 's': arg = va_arg(args, char*);
				n--;
				switch(arg)
				{
					case NULL: printf("(nil)");
						break;
					default:
						printf("%s", arg);
				}
				break;
			default: break;
		}
		if (n)
			printf(", ");
		types++;
	}
	va_end(args);
	printf("\n");
}
