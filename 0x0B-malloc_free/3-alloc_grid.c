#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that creates a 2D array of int
 * @width: number of rows
 * @height: number of columns
 *
 * Return: Pointer to the 2D array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	array = malloc(sizeof(int) * (width * height));

	if (array == NULL)
		return (NULL);

	if (width <= 0 || height <= 0)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			array[i][j] = 0;
		}
	}

	return (array);
}
