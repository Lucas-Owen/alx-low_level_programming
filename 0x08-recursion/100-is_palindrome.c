#include "main.h"
/**
 * is_palindrome_helper - Checks if a string is a palindrome
 * @s: Pointer to beginnig of buffer
 * @end: Pointer to last character of buffer before \0
 * Return: 1 if true, 0 otherwise
 */
int is_palindrome_helper(char *s, char *end)
{
	if (*s != *end)
		return (0);
	if (end <= s)
		return (1);
	return (is_palindrome_helper(s + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string
 * Return: 1 if true, 0 otherwise
 */
int is_palindrome(char *s)
{
	char *end = s;

	while (*end)
		end++;
	return (is_palindrome_helper(s, end - 1));
}
