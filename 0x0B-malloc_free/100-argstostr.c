#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all arguments of a program each separated by \n
 * @ac: Arg count
 * @av: arg array
 * Return: Pointer to the new string or NULL
 */
char *argstostr(int ac, char **av)
{
	char *result;
	int i;
	unsigned int size, total;

	if (ac == 0 || av == NULL)
		return (NULL);

	total = 0;
	for (i = 0; i < ac; i++)
	{
		total += strlen(av[i]) + 1;
	}

	result = malloc(total * sizeof(char) + 1);
	if (result == NULL)
		return (NULL);

	result[total] = '\0';
	for (i = ac - 1; i >= 0; i--)
	{
		total--;
		size = strlen(av[i]);
		result[total] = '\n';
		while (size > 0)
		{
			total--;
			size--;
			result[total] = av[i][size];
		}
	}
	return (result);
}
