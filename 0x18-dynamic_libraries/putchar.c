#include "main.h"
/**
 * main - prints putchar followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	char pc[] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(pc[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
