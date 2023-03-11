#include "main.h"
/**
 * _strspn - This function gets the length of a prefix substring.
 * @s: The string parameter.
 * @accept: The prefix to be measured.
 * Return: The number of bytes in s
 * Date: 7-03-2023
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (accept[b] == *s)
			{
				a++;
				break;
			}
			else if ((accept[b + 1]) == '\0')
				return (a);
		}
		s++;
	}
	return (a);
}
