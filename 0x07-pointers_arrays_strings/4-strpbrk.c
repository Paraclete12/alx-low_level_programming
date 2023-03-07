#include "main.h"
/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string parameter searched.
 * @accept: The set of bytes searched for.
 * Return:  pointer to the matched bytes
 * Date: 6-03-2023
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (accept[a] == *s)
				return (s);
		}
		s++;
	}
	return ('\0');
}

