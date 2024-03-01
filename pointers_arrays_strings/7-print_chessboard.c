#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - will print a chessboard
 *
 * @a: input pointer
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int c = 0;

	for (i = 0; i < 64; i++)
	{
		if (i % 8 == 0 && i != 0)
		{
			c = i;
			_putchar('\n');
		}
		_putchar(a[i / 8][i - c]);
	}
	_putchar('\n');
}
