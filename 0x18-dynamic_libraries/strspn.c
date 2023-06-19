#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: The string
 * @accept: Characters to look for
 * Return: Number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int found;
	char *temp;

	while (*s)
	{
		found = 0;
		for (temp = accept; *temp; temp++)
		{
			if (*temp == *s)
			{
				n++;
				found = 1;
				break;
			}
		}
		if (!found)
			break;
		s++;
	}

	return (n);
}
