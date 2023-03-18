#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - makes a 2D array and initializes it to  zero
 * @width: number of columns in grid
 * @height: number of rows in grid
 *
 * Return: pointer to grid, 0 otherwise.
 */
int **alloc_grid(int width, int height)
{
	int **arrays;
	int i, j;

	/*check if function parameters are 0 or -ve*/
	if (width <= 0 || height <= 0)
		return (NULL);

	/*allocate dynamic memory to arrays: */
	/*allocate memory to array of pointers*/
	arrays = (int **)malloc(height * (sizeof(int *)));
	/*allocate dynamic memory to array of int*/
	for (i = 0; i < height; i++)
	{
		arrays[i] = (int *)malloc(width * (sizeof(int)));
	}

	/*condition for unsuccessful allocation*/
	if (arrays == NULL)
		return (NULL);

	/*initialise arrays to 0*/
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arrays[i][j] = 0;
		}
	}

	return (arrays);
}
