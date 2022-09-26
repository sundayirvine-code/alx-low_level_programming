#include "main.h"

/**
 * print_chessboard - function that peints the chessboard
 * @a: number of rows
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < a; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(*(*(i + a) + j));
		}
		_putchar('\n');
	}
}
