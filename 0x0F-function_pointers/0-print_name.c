/**
 * print_name - A function that prints a name
 * @name: The name
 * @f: Custom print function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
