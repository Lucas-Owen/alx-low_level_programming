#include "main.h"
#include <stddef.h>

/**
 * _strstr - Finds the first occurrence of needle in haystack
 * @haystack: Subject string
 * @needle: Substring to look for
 * Return: A pointer to the beginning of the located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (haystack == NULL || needle == NULL)
		return (NULL);

	while (*haystack)
	{
		if (*haystack == *needle)
		{
			for (i = 0; *(needle + i); i++)
			{
				if (*(haystack + i) == '\0')
					return (NULL);
				if (*(needle + i) != *(haystack + i))
					break;
			}
			if (*(needle + i) == '\0')
				return (haystack);
		}
		haystack++;
	}

	return (NULL);
}
