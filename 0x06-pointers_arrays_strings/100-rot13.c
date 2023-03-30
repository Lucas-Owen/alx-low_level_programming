#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: the string
 * Return: Pointer to the string
 */
char *rot13(char *str)
{
	char *orign = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *temp = str;
	int i;

	while (*temp)
	{
		for (i = 0; i < 52; i++)
		{
			if (*temp == *(orign + i))
			{
				*temp = *(rot13 + i);
				break;
			}
		}
		temp++;
	}
	return (str);
}
