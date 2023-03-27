#include "main.h"

/**
 * _atoi - Converts string to integer
 * @s: Pointer to string to be converted to integer
 * Return: The integer or 0 if unsuccessful
 */
int _atoi(char *s)
{
	int sign = 1;
	int i = 0, j;
	int number = 0;

	while ((*(s + i) > '9' || *(s + i) < '0') && *(s + i))
		i++;

	if (!(*(s + i)))
		return (0);

	j = i - 1;
	while (j >= 0)
	{
		if (*(s + j) == '-')
			sign *= -1;
		j--;
	}
	number = *(s + i) - '0';
	i++;
	while (*(s + i) >= '0' && *(s + i) <= '9' && *(s + i))
		number = number * 10 + (*(s + i++) - '0');

	return (sign * number);
}
