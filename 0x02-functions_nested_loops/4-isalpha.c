#include "main.h"

/**
* _isalpha - checks for alphabet
* @c: character to be checked
*
*Return: 1 if is a letter,0 otherwise
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= '2') || (c >= 'A' && c <= '2'))
		return (1);
	else
		return (0);
}
