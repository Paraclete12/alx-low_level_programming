#include "main.h"
#include <stdlib.h>

/**
 * array_range - This function creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: pointer to new array
 * Date: 20-03-2023
 */
int *array_range(int min, int max)
{
	int *ptr;
	int x;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (!ptr)
		return (NULL);
	for (x = 0; x <= (max - min); x++)
		ptr[x] = min + x;
	return (ptr);
}
