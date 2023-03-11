#include "main.h"
/**
 * _strstr - This function finds the occurrence of
 * needle in the string haystack.
 * @haystack: string searched.
 * @needle: substring to be located.
 * Return: beginning of located substring
 * Date: 7-03-2023
*/
char *_strstr(char *haystack, char *needle)
{
	int a;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		a = 0;

		if (haystack[a] == needle[a])
		{
			do {
				if (needle[a + 1] == '\0')
					return (haystack);
				a++;
			} while (haystack[a] == needle[a]);
		}
		haystack++;
	}
	return ('\0');
}
