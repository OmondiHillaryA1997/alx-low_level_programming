#include "main.h"

/**
 * print_line - function that draws a straight line
 * @n: number of times_will be printed
 * Return: null
 */

	void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int t;

		for (t = 1; t <= n; t++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
