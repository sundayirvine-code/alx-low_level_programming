#include "main.h"

/**
 * print_chessboard - prints chessboard.
 * @a: matrix
*/

void print_chessboard(char b(*a)[8])
{
	int i, j;

	for (i = 0; i < a; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(b[i][j]);
		}
	_putchar('\n');
	}
}
