#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc, causes process exit (98)
 * on failure
 * @b: size
 * Return: Pointer to the allocated memory space
 */
void *malloc_checked(unsigned int b)
{
	void *res = malloc(b);

	if (!res)
		exit(98);
	return (res);
}