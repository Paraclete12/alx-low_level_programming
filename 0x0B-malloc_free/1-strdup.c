#include "main.h"
#include <stdlib.h>
/**
 * _strdup - This function return a pointer to newly allocated space.
 * @str: string pointer
 * Return: Null if empty otherwise pointer to duplicated string
 * Date: 14-03-2023
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i, length = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		length++;
	duplicate = malloc(sizeof(char) * (length + 1));
	if (duplicate == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		duplicate[i] = str[i];
	duplicate[length] = '\0';
	return (duplicate);
}
