#include <stdio.h>
#include <stdlib.h>
/*#include <ctype.h>*/
/**
 * main - program that adds integers
 * @argc: argument constant parameter
 * @argv: argument vector parameter
 * Return: 0 or 1
 * Date: 11-03-2023
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
	}
		sum += atoi(argv[i]);
	}
		printf("%d\n", sum);
	return (0);
}

