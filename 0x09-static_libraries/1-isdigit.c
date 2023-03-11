#include "main.h"
/**
 * _isdigit - A function that shows a digit
 * @c: the parameter
 * Date: 23-02-2023
 * Return:1 if C is digit else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
