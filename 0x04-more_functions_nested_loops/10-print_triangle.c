#include "main.h"

/**
 * print_triangle - function to print a triangle
 * @size: is the size of the triangle
 * @#: used to print the triangle
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int b, d;

		for (b = 1; b <= size; b++)
		{
			for (d = b; d < size; d++)
			{
				_putchar(' ');
			}

			for (d = b; d <= b; d++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
