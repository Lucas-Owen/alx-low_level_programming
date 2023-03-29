#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @str: the string
 * Return: Pointer to beginning of the string
 */
char *string_toupper(char *str)
{
	char *temp = str;

	while (*temp)
	{
		if (*temp >= 'a' && *temp <= 'z')
			*temp -= 32;
		temp++;
	}
	return (str);
}
