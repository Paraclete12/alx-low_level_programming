#include <stdio.h>
#include <stdlib.h>
/**
 * main - This program prints all arguments it receives
 * @argc: argument count parameter
 * @argv: argument vector parameter
 * Return: 0
 * Date: 10-03-2023
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
