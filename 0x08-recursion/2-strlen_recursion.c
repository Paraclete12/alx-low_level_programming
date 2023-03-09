#include "main.h"
/**
 * _strlen_recursion - Functions that returns the length of a string.
 * @s: string measured
 * Return: string length.
 * Date: 9-03-2023
 */
int _strlen_recursion(char *s)
{

	int length = 0;

	if (*s != '\0')
	{
		length++;
		length += _strlen_recursion(s + 1);
		}
	return (length);
}
