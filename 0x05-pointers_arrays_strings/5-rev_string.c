#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Pointer to a string
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;
	int half_len, j = 0;
	char temp;

	while (*(s + j))
		j++;

	half_len = j / 2;
	for (i = 0, --j; i < half_len; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
