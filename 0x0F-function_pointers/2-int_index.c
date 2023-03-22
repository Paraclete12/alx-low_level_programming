#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 * @array: array parameter
 * @size: index of array
 * @cmp: function pointer to compare values.
 * Return: int type
 * Date: 22-03-2023
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (a = 0; a < size; a++)
			if (cmp(array[a]))
				return (a);
	}

	return (-1);
}
