#include "main.h"
/**
 * _strchr - This function locates a character in a string.
 * @s: The string searched.
 * @c: The character to be identified.
 * Return:  pointer to the point found in the string.
 * Date: 7-03-2023
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (s + a);
	}
	return ('\0');
}
