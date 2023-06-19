#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - return specified size of 2D array
 * @width: columon of the grid/ matrix
 * @height: row of the matrix
 *
 * Description - it will allocate a dynamic memory for the matrix and return it
 * Return: the double pointer of the matrix to the caller.
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	matrix = malloc(height * sizeof(int *));
	if (matrix != NULL)
	{
		int i;
		for (i = 0; i < height; i++)
		{
			matrix[i] = malloc(width * sizeof(int));
			if (matrix[i] != NULL)
			{
				int j; 
				for (j = 0; j < width; j++)
				{
					matrix[i][j] = 0;
				}
			}
			else 
			{
				 for (i = 0; i < width; i++)
				 {
					 free(matrix[i]);
				 }					 
			}
		}
	}
	else 
	{
		free(matrix);
	}
	return (matrix); 
}
