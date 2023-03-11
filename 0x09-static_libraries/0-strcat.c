#include "main.h"
/**
 * _strcat - this function concatenates 2 strings
 * @dest:The destination of the concatenated string
 * @src:The string copied
 * Return: dest
 * Date:1-03-2023
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (dest[a])
		a++;
	for (b = 0; src[b]; b++)
		dest[a++] = src[b];
	return (dest);
}
