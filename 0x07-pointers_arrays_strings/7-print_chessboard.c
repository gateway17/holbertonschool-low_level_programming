#include "holberton.h"
/**
 * print_chessboard - prints a chessboard.
 * @a: Main array.
 */
void print_chessboard(char (*a)[8])
{
	int ctr, ctr2;

	for (ctr = 0; ctr < 8; ctr++)
	{
		for (ctr2 = 0; ctr2 < 8; ctr2++)
		{
			_putchar(a[ctr][ctr2]);
		}
	_putchar('\n');
	}
}
