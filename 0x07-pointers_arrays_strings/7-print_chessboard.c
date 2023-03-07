#include "main.h"
/**
 * print_chessboard - This function prints a chessboard
 * @a: input pointer.
 * Date: 6-03-2023
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; a[i][7]; a++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
