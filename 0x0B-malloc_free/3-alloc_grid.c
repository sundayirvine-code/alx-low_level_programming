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

	int i, count, j;
 
    	int** arr = (int**)malloc(height * sizeof(int*));
    	for (i = 0; i < height; i++)
        	arr[i] = (int*)malloc(width * sizeof(int));
 
    
    	count = 0;
    	for (i = 0; i < height; i++)
        	for (j = 0; j < width; j++)
            		arr[i][j] = ++count;
 
 
    	for (i = 0; i < height; i++)
        	free(arr[i]);
 
    	free(arr);

	return (array);
}
