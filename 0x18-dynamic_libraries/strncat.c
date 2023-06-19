#include "main.h"

/**
 * _strncat - appends at most n bytes from src to dest string
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 * Return: Pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;

	while (*temp)
		temp++;
	while (*src && n--)
		*temp++ = *src++;
	*temp = '\0';
	return (dest);
}
