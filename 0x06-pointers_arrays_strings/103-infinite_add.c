#include "main.h"

/**
 * infinite_add - adds two numbers presented as character arrays
 * @n1: first number
 * @n2: second number
 * @r: where the result will be stored
 * @size_r: buffer size;
 * Return: Pointer to r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, sum, s1 = 0, s2 = 0, sr = size_r - 1, carry;

	while (*(n1 + s1))
		s1++;

	while (*(n2 + s2))
		s2++;

	carry = 0;
	while (s1 >= 0 || s2 >= 0)
	{
		sr--;
		s1--;
		s2--;
		if (sr < 0)
			return (0);
		sum = 0;
		if (s1 >= 0)
			sum += n1[s1] - '0';
		if (s2 >= 0)
			sum += n2[s2] - '0';
		sum += carry;
		carry = sum / 10;
		r[sr] = sum % 10 + '0';
	}

	for (i = 0; i + sr < size_r; i++)
		r[i] = r[i + sr];
	r[size_r - sr - 1] = '\0';

	return (r);
}
