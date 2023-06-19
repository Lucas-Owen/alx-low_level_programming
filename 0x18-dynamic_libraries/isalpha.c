/**
 * _isalpha - checks whether a character is a lowercase or
 * uppercase letter
 *
 * @c: int - the character to be checked
 *
 * Return: 1 if c is lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
