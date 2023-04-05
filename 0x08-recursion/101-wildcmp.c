#include "main.h"

/**
 * check_wild - Helper to compare strings in case wild card is found
 * @s1: Pointer to first string when * is found
 * @s2: Pointer to second string where * is found
 * @i: Counter
 * Return: 1 if s1 and s2 can be considered identical, 0 otherwise
 */
int check_wild(char *s1, char *s2, int i)
{
	if (*(s1 + i) == '\0')
		return (0);
	if (wildcmp(s1 + i, s2 + 1))
		return (1);
	return (check_wild(s1, s2, i + 1));
}
/**
 * wildcmp - Compares two strings where s2 can have a wildcard (*)
 * @s1: First string
 * @s2: Second string
 * Return: 1 if s1 and s2 can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
			return (1);
		return (check_wild(s1, s2, 0));
	}

	if (*s1 != *s2)
		return (0);
	return (wildcmp(s1 + 1, s2 + 1));
}
