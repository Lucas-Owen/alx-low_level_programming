#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2D array of ints of specified dimensions
 * array is initialized with 0s
 * @width: Width of the 2D Array
 * @height: Height of the 2D Array
 * Return: Pointer to the 2D Array or NULL
 */
int **alloc_grid(int width, int height)
{
	int **matrix, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	matrix = malloc(height * sizeof(int *));
	if (matrix == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(width * sizeof(int));
		if (matrix[i] == NULL)
		{
			for (j = i - 1; j >= 0; j--)
				free(matrix[j])
			free(matrix);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			matrix[i][j] = 0;
	}
	return (matrix);
}
