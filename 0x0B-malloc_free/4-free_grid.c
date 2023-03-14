#include <stdlib.h>
#include "main.h"
/**
 * free_grid - This function free the memory allocated to 2d array
 * @grid: array parameter
 * @height: height integer parameter
 * Return:void
 * Date: 14-03-2023
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
