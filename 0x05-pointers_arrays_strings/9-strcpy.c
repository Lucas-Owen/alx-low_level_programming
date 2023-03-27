#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: Pointer to string where the string will be copied
 * @src: Pointer to string to copy
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (1)
	{
		if (*(src + i))
		{
			*(dest + i) = *(src + i);
			i++;
		}
		else
			break;
	}
	return (dest);
}
