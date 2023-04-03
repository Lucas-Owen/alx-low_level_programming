#include "main.h"
#define NULL 0
/**
 * _strstr - Finds the first occurrence of needle in haystack
 * @haystack: Subject string
 * @needle: Substring to look for
 * Return: A pointer to the beginning of the located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *temp1, *temp2;

	if (haystack == NULL || needle == NULL)
		return (NULL);

	while (*haystack)
	{
		if (*haystack == *needle)
		{
			for (temp1 = haystack, temp2 = needle; *temp2; temp1++, temp2++)
			{
				if (!*temp1)
					return (NULL);
				if (*temp1 != *temp2)
				{
					break;
				}
			}
			if (!*temp2)
				return (haystack);
		}
		haystack++;
	}

	return (NULL);
}
