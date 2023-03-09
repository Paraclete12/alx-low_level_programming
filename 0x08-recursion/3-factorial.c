#include "main.h"
/**
 * factorial - Function that returns the factorial of a given number.
 * @n: The number to find the factorial of.
 * Return: 0
 * Date:8-03-2023
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n > 0 && n <= 1)
		return (1);
	else if (n > 1)
		return (n * factorial(n - 1));
	return (0);
}
