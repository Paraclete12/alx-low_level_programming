#include "main.h"
/**
 * _memset- This function fills the memory with a constant byte.
 * @s: memory area
 * @b: constant byte
 * @n: bytes
 * Return: s memory area pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
