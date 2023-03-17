#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - prints if the last digit is greater than 5, less
 * than 6 or 0
 *
 * Return: 0
 */
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last = n % 10;

	printf("Last digit of %d is %d", n, last);
	if (last > 5)
	{
		printf(" and is greater than 5\n");
	}
	else if (last == 0)
	{
		printf(" and is 0\n");
	}
	else if (last < 6)
	{
		printf(" and is less than 6 and not 0\n");
	}
	return (0);
}
