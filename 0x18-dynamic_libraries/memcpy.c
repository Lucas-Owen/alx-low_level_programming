#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: Destination memory
 * @src: Source memory
 * @n: Number of bytes
 * Return: Pointer to beginning of dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *temp = dest;

	while (n--)
		*temp++ = *src++;

	return (dest);
}
