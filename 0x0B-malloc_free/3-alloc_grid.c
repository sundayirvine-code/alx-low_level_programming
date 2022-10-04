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

	int r = 3, c = 4, i, j, count;
 
    	int** arr = (int**)malloc(r * sizeof(int*));
    	for (i = 0; i < r; i++)
        	arr[i] = (int*)malloc(c * sizeof(int));
 
    
    	count = 0;
    	for (i = 0; i < r; i++)
        	for (j = 0; j < c; j++)
            		arr[i][j] = ++count;
 
 
    	for (int i = 0; i < r; i++)
        	free(arr[i]);
 
    	free(arr);

	return (array);
}
