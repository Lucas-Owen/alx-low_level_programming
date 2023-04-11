#include <stdlib.h>

/**
 * free_grid - Frees a malloced 2D array
 * @grid: Pointer to the 2D Array
 * @height: Height of the 2D Array
 * Return: Void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
