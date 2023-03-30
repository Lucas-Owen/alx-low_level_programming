#include "main.h"

/**
 * _strncpy - copies at most n bytes from src to dest string
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 * Return: Pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *temp = dest;

	while (*src && n)
	{
		*temp++ = *src++;
		n--;
	}
	while (n--)
		*temp++ = '\0';
	return (dest);
}
