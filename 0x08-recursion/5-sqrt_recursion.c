#include "main.h"
/**
 * _square_root - finds square root of number
 * @n: input number for square root
 * @x: tests square root of number
 * Return: square root of n, else -1 if no natuarl square root found
 */
int _square_root(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (_square_root(n, x + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number to find square root of
 *
 * Return: square root of n, else -1 if no natural square root found
 *
 */
int _sqrt_recursion(int n)
{
	return (_square_root(n, 1));
}
