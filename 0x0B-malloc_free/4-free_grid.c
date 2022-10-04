#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2D grid
 * @grid: double pointer to a 2D array
 * @height: number of rows of the array
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
