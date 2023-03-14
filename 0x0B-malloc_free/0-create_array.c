#include "main.h"
#include <stdlib.h>
/**
 * create_array - This fuction creates an array of characters.
 * Return: Null if 0 and array pointer
 * @size:memory allocated
 * @c: character in array
 * Date: 14-03-2023
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
