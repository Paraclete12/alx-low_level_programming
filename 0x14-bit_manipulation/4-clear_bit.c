#include "main.h"

/**
 * clear_bit - This function sets the value of bit
 * to 0 at a given index
 * @n: unsigned long int
 * @index: index to set to 0
 * Return: 1 if successful hence -1
 * Date: 11-04-2023
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
