#include "main.h"

/**
 * get_bit - A funtion that returns bit of given index
 * @n: unsigned int parameter
 * @index: unsigned int parameter for index
 * Return: bit index else -1
 * Date: 11-04-2023
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}
