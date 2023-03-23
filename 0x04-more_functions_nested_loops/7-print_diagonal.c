#include "main.h"

/**
 * print_diagonal - function that prints a diagonal line on the terminal
 * @n: number of times \ should be printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int q, s;

		for (q = 0; q < n; q++)
		{
			for (s = 0; s < n; s++)
			{
				if (s == q)
					_putchar('\\');
				else if (s < q)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
