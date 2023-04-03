#include "main.h"

/**
 * print_chessboard - Function that prints the chaseboard
 * @a: 2d array
 * Return: chase board
 */

void print_chessboard(char (*a)[8])
{
	int c;
	int b;

	c = 0;
	for (; c < 8; c++)
	{
		b = 0;
		for (; b < 8; b++)
			_putchar (a[c][b]);
		_putchar ('\n');
	}
}
