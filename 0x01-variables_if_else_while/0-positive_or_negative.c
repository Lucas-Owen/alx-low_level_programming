#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - prints whether a generated random number is positive
 * negative or zero
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%d is ", n);
	if (n > 0)
	{
		puts("positive");
	}
	else if (n < 0)
	{
		puts("negative");
	}
	else
	{
		puts("zero");
	}
	return (0);
}
