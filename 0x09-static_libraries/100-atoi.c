#include "main.h"
/**
 * _atoi - This function convert a string to an integer.
 * @s: string parameter
 * Return:integer as result.
 * Date:27-02-2023
 */
int _atoi(char *s)
{
	unsigned int value = 0;
	int sign = 1;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			value = (value * 10) + (*s - '0');
		else if (value > 0)
			break;
	} while (*s++);
	return (value * sign);
}
