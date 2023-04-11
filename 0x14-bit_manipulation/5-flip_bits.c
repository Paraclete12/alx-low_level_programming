#include "main.h"

/**
 * flip_bits - This fuctions returns the number of bits
 * needed to flip to get from one number to another.
 * @n: unsigned long int parameter
 * @m: unsigned long int parameter
 * Return: number required to flip.
 * Date: 11-04-2023
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m;
	unsigned int i = 0;

	while (flip > 0)
	{
		if ((flip & 1) == 1)
			i++;
		flip >>= 1;
	}

	return (i);
}
