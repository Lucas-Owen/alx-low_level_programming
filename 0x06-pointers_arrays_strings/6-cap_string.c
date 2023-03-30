#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string
 * Return: Pointer to the beginning of the string
 */
char *cap_string(char *str)
{
	char *temp = str;

	if (*temp >= 'a' && *temp <= 'z')
		*temp -= 32;
	while (*temp)
	{
		switch (*temp)
		{
			case ',':
				;
			case ';':
				;
			case '.':
				;
			case '!':
				;
			case '\"':
				;
			case '?':
				;
			case '(':
				;
			case ')':
				;
			case '{':
				;
			case '}':
				;
			case ' ':
				;
			case '\n':
				;
			case '\t':
				if (*(temp + 1))
					if (*(temp + 1) >= 'a' && *(temp + 1) <= 'z')
						*(temp + 1) -= 32;
				break;
			default:
				break;
		}
		temp++;
	}
	return (str);
}
