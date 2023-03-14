#include <stdlib.h>
#include "main.h"
/**
 * argstostr - concatenates two arguments
 * @ac: argument count parameter
 * @av: argument string parameter.
 * Date: 14-03-2023
 * Return: Pointer to String.
*/
char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, k = 0, l = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
		l++;
	}
	l++;
	s = malloc(l * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		s[k] = '\n';
		k++;
	}
	s[k] = '\0';
	return (s);
}
