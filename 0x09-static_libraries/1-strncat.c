#include "main.h"
/**
 * _strncat - This function concatenates 2 strings with n bytes.
 * @dest: Destination of concatenated string
 * @src: source of string
 * @n: number of bytes
 * Return: dest
 * Date: 1-03-2023
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	while (dest[a])
		a++;

	for (b = 0; b < n && src[b] != '\0'; b++)
		dest[a + b] = src[b];
	dest[a + b] = '\0';
	return (dest);
}
