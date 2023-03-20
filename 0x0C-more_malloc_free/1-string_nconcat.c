#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - this function concatenates 2 strings
 * @s1: concatenated string
 * @s2:string to concatenate
 * @n: number of bytes
 * Return: pointer to concatenated string
 * Date: 20-03-2023
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y, l1, l2;
	char *p;

	l1 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (x = 0; s1[x]; ++x)
		++l1;
	l2 = l1 + n;
	p = malloc(sizeof(char) * (l2 + 1));
	if (!p)
		return (NULL);
	for (x = 0; x < l1; ++x)
	{
		p[x] = s1[x];
	}
	for (y = 0; y < n; ++y, ++x)
	{
		p[x] = s2[y];
	}
	p[x] = '\0';
	return (p);
}
