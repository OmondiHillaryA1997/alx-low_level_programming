#include "main.h"

/**
 * print_line - function that draws a straight line
 * @l: number of times_will be printed
 * Return: null
 */

	void print_line(int l)
{
	if (l <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int t;

		for (t = 1; t <= l; t++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
