#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if strings are equal, (>0) if s1 > s2, (<0) if s1 < s2
 */
int _strcmp(char *s1, char *s2)
{
	for (; *s1 && *s2; s1++, s2++)
	{
		if (*s1 - *s2 != 0)
			return (*s1 - *s2);
	}
	if (*s1 || *s2)
		return (*s1 - *s2);
	return (0);
}
