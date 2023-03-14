#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates 2 strings.
 * @s1: concatenated string
 * @s2: string to be concatenated.
 * Return: concatenated string and Null
 * Date: 14 - 03 - 2023.
 */
char *str_concat(char *s1, char *s2)
{
	char *cat_str;
	int i, ci = 0, length = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] || s2[i]; i++)
		length++;
	cat_str = malloc(sizeof(char) * length);
	if (cat_str == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		cat_str[ci++] = s1[i];
	for (i = 0; s2[i]; i++)
		cat_str[ci++] = s2[i];
	return (cat_str);
}
