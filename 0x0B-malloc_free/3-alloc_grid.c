#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - This function returns a pointer to a 2-dimensional array
 * of integers
 * @width: integer parameter
 * @height: integer parameter
 * Return: NULL on failure and pointer to array.
 * Date: 14-03-2023
 */
int **alloc_grid(int width, int height)
{
	int **grid, a, b;

	if (width == 0 || height == 0)
		return (NULL);
	grid = (int **)malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		grid[a] = (int *)malloc(sizeof(int) * width);
		if (grid[a] == NULL)
		{
			for (b = 0; b < a; b++)
				free(grid[b]);
			free(grid);
			return (NULL);
		}
		for (b = 0; b < width; b++)
		{
			grid[a][b] = 0;
		}
	}
	return (grid);
}
