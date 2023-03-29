#include "main.h"

/**
 * leet - encodes a string into 1337
 * ignoring case, a-4, e-3, o-0, t-7, l-1
 * @str: The string
 * Return: Pointer to the beginning of the string
 */
char *leet(char *str)
{
	char *temp = str;

	while (*temp)
	{
		if (*temp == 'a' || *temp == 'A')
			*temp = '4';
		else if (*temp == 'e' || *temp == 'E')
			*temp = '3';
		else if (*temp == 'o' || *temp == 'O')
			*temp = '0';
		else if (*temp == 't' || *temp == 'T')
			*temp = '7';
		else if (*temp == 'l' || *temp == 'L')
			*temp = '1';
		temp++;
	}
	return (str);
}
