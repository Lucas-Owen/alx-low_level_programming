#include "main.h"

/**
 * _memset - function fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: Memory area to be filled
 * @b: Byte to fill with
 * @n: Number of bytes to fill
 * Return: Pointer to the beginning of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *temp = s;

	while (n--)
		*temp++ = b;

	return (s);
}
