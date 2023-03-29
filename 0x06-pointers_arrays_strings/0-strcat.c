#include "main.h"

/**
 * _strcat - appends src to dest string
 * @dest: first string
 * @src: second string
 * Return: Pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*temp)
		temp++;
	while (*src)
		*temp++ = *src++;
	*temp = '\0';
	return (dest);
}
