#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * shift - Shifts array elements by n positions to the left
 * @array: The array
 * @size: Size of the array
 * @n: Amount to shift with
 * Return: Void
 */
void shift(char *array, unsigned int size, unsigned int n)
{
	unsigned int i;

	if (n == 0)
		return;

	for (i = 0; i < size - n; i++)
	{
		array[i] = array[i + n];
	}
	for (i = size - n; i < size; i++)
	{
		array[i] = '0';
	}
}
/**
 * initialize_with_zeros - set every element of array to the character '0'
 * @array: The array
 * @size: Length of the array
 * Return: void
 */
void initialize_with_zeros(char *array, unsigned int size)
{
	while (size > 0)
		array[--size] = '0';
}
/**
 * add - Adds two numbers as char arrays, each one has to be large to
 * accomodate the sum
 * The sum is placed in the first number
 * @num1: First number
 * @num2: Second number
 * @size: Length of the arrays
 * Return: void
 */
void add(char *num1, char *num2, unsigned int size)
{
	int n1, n2, carry = 0, sum;

	while (size > 0)
	{
		size--;
		n1 = num1[size] - '0';
		n2 = num2[size] - '0';
		sum = n1 + n2 + carry;
		carry = sum / 10;
		num1[size] = sum % 10 + '0';
	}
}
/**
 * s_dig_mul - Multiplies a number as a string with a single digit
 * @num: The number as char array
 * @length: length of the number array
 * @digit: The single digit as a character
 * @size: Size of array of results
 * Return: Pointer to a string array of results
 */
char *s_dig_mul(char *num, unsigned int length, char digit, unsigned int size)
{
	int carry = 0, a = digit - '0', b, c;
	char *result = malloc(sizeof(char) * (size + 1));

	if (result == NULL)
	{
		return (NULL);
	}
	initialize_with_zeros(result, size);
	result[size] = '\0';
	while (length > 0)
	{
		length--;
		b = num[length] - '0';
		c = a * b + carry;
		carry = c / 10;
		size--;
		result[size] = c % 10 + '0';
	}
	result[size - 1] = carry + '0';
	return (result);
}
/**
 * multiply - Multiplies two positive numbers passed as strings
 * @num1: First number
 * @num2: Second number
 * Return: Pointer to result as char array
 */
char *multiply(char *num1, char *num2)
{
	char *result;
	unsigned int size1 = strlen(num1);
	unsigned int size2 = strlen(num2);
	unsigned int size = size1 + size2;
	char *temp;
	char *bigger = size1 >= size2 ? num1 : num2;
	char *smaller = size1 < size2 ? num1 : num2;
	unsigned int s_big = size1 >= size2 ? size1 : size2;
	unsigned int s_small = size1 < size2 ? size1 : size2;
	unsigned int offset = 0;
	unsigned int i = s_big;

	result = malloc(sizeof(char) * (size + 1));
	if (result == NULL)
	{
		puts("Error");
		exit(98);
	}
	initialize_with_zeros(result, size);
	result[size] = '\0';
	while (i > 0)
	{
		i--;
		if (s_small > 0)
		{
			s_small--;
			temp = s_dig_mul(bigger, s_big, smaller[s_small], size);
			if (temp == NULL)
			{
				puts("Error");
				free(result);
				exit(98);
			}
			shift(temp, size, offset);
			add(result, temp, size);
			free(temp);
			offset++;
		}
	}
	if (result[0] == '0')
		shift(result, size + 1, 1);
	return (result);
}

/**
 * main - Entry point for the program that multiplies two numbers
 * @argc: Length of argv array
 * @argv: Array of arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	char *result, *temp;
	int i;

	if (argc != 3)
	{
		puts("Error");
		exit(98);
	}

	for (i = 1; i < argc; i++)
	{
		temp = argv[i];
		while (*temp != '\0')
		{
			if (*temp > '9' || *temp < '0')
			{
				puts("Error");
				exit(98);
			}
			temp++;
		}
	}

	result = multiply(argv[1], argv[2]);
	if (result)
	{
		printf("%s\n", result);
		free(result);
	}
	else
	{
		puts("Error");
		exit(98);
	}

	return (0);
}
