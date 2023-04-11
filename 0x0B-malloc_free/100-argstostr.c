#include <stdlib.h>

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
	unsigned int *sizes, total;

	if (ac == 0 || av == NULL)
		return (NULL);

	sizes = malloc(ac * sizeof(unsigned int));
	if (sizes == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		sizes[i] = 0;
		while (*(av[i] + sizes[i]) != '\0')
			sizes[i]++;

		sizes[i]++;
	}

	total = 0;
	for (i = 0; i < ac; i++)
		total += sizes[i];

	result = malloc(total * sizeof(char) + 1);
	if (result == NULL)
		return (NULL);

	result[total] = '\0';
	for (i = ac - 1; i >= 0; i--)
	{
		total--;
		sizes[i]--;
		result[total] = '\n';
		while (sizes[i] > 0)
		{
			total--;
			sizes[i]--;
			result[total] = av[i][sizes[i]];
		}
	}
	free(sizes);
	return (result);
}
