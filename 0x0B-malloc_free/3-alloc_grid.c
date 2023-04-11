#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2D array of specified dimensions
 * @width: Width of the 2D Array
 * @height: Height of the 2D Array
 * Return: Pointer to the 2D Array or NULL
 */
int **alloc_grid(int width, int height)
{
	int **matrix, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	matrix = malloc(sizeof(int *));
	for (i = 0; i < height; i++)
		matrix[i] = malloc(width * sizeof(int));
	return (matrix);
}
