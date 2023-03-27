#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for a program
 * 101-crackme
 * Return: Always (0)
 */
int main(void)
{
	char password[2772];
	int total = 0, c;
	int i = 0;

	srand(time(NULL));
	while (2772 - total > 126)
	{
		c = rand() % 95 + 32;
		if (c == '\'' || c == '\"')
			continue;
		password[i++] = c;
		total += c;
	}
	password[i++] = 2772 - total;
	password[i] = '\0';

	for (i = 0; password[i]; i++)
		putchar(password[i]);

	return (0);
}
