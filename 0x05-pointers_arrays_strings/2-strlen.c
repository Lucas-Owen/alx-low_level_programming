#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: Pointer to string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len))
		len++;

	return (len);
}
