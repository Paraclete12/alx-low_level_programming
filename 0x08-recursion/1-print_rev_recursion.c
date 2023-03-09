#include "main.h"
/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: string to be printed.
 * Return:void
 * Date: 9-03-2023
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

