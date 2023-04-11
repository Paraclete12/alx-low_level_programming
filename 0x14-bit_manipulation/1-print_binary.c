#include "main.h"

/**
 * print_binary - This function prints binary number
 * @n: unsigned int parameter
 * Return: void
 * Date: 11-04-2023
 */
void print_binary(unsigned long int n)
{
	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
