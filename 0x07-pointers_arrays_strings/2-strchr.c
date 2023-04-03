#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string
 * @s: The string
 * @c: The character to locate
 * Return: Pointer to the first occurence of the character or NULL
 */
char *_strchr(char *s, char c)
{
	if (s == NULL)
		return (NULL);

	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (*s == c ? s : NULL);
}
