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
 * get_end - Returns a pointer to the end of a string
 * @s: The string
 * Return: A pointer to the terminating character of s
 */
char *get_end(char *s)
{
	if (*s)
		return (get_end(s + 1));
	return (s);
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string
 * Return: 1 if true, 0 otherwise
 */
int is_palindrome(char *s)
{
	char *end = get_end(s);

	return (is_palindrome_helper(s, end - 1));
}
