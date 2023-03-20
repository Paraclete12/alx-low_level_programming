#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * malloc_checked - This function allocates a memory
 * @b: size parameter.
 * Return: pointer to allocated memory
 * Date: 16-03-2023
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (!ptr)
		exit(98);
	return (ptr);
}
