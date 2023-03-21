/**
 * print_sign - prints the sign of a number
 *
 * @n: int - the number to be checked
 *
 * Return: 1 if n is greater than 0 and prints +
 *	0 and prints 0 if n is zero
 *	-1 and prints - if n is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
