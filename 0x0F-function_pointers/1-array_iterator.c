#include "function_pointers.h"
/**
 * array_iterator - A function that executes a function
 * given as a parameter on each element in array
 * @array: array to execute
 * @size: size of array to execute
 * @action: function pointer.
 * Return: void
 * Date: 22-03-2023
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array != NULL && action != NULL)
	{
		for (a = 0; a < size; a++)
			action(array[a]);
	}
}
