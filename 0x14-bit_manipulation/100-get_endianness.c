#include "main.h"

/**
 * get_endianness - A function that indicates endians.
 * Return: 0 for big & 1 for little endian.
 * Date: 11-04-2023
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *endian = (char *)&i;

	if (*endian)
		return (1);
	else
		return (0);
}
