#include "main.h"
/**
 * _pow_recursion - This function raise x to the power of y.
 * @x: The number to be raised.
 * @y: The power.
 * Return: The value of x raised to the power of y.
 * Date: 9-03-2023
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
