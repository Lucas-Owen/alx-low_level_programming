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
	char leet[] = "aAeEoOtTlL";
	char l1337[] = "4433007711";
	int i;

	while (*temp)
	{
		for (i = 0; leet[i]; i++)
		{
			if (*temp == leet[i])
				*temp = l1337[i];
		}
		temp++;
	}
	return (str);
}
