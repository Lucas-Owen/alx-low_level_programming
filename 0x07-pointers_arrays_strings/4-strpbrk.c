#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Locates the first occurence in the string s
 * of any of the bytes in the string accept
 * @s: Subject string
 * @accept: Characters to look for
 * Return: Pointer to the bytes in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	char *temp;

	while (*s)
	{
		for (temp = accept; *temp; temp++)
		{
			if (*s == *temp)
				return (s);
		}
		s++;
	}
	return (NULL);
}
