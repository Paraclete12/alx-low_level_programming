#include "main.h"
/**
 * _is_prime - Function to check if number is a prime number
 *
 * @n: number to check if its a prime number
 * @x: Divider of n
 *
 * Return: 1 if n is a prime number, else 0
 */
int _is_prime(int n, int x)
{
	if (x * x > n)
		return (1);
	if (n % x == 0)
		return (0);
	return (_is_prime(n, x + 1));
}
/**
 * is_prime_number - checks if a number is a prime number
 *
 * @n: number to check if prime
 *
 * Return: 1 if n is a prime number, else 0
 *
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_is_prime(n, 2));
}
