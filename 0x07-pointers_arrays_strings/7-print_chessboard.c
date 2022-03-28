#include "main.h"

/**
 * print_chesboard - prints the chessboard
 * @a: pointer to pieces to print
 *
 * Return:bvoid
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; j++)
	{
		_putchar(a[i][j]);
	}
	_putchar('\n');
}
}
