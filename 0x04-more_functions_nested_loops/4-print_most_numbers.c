#include "main.h"

/**
 * print_most_numbers - function to print 0 t0 9 with an exception of 2 and 4
 * Return: null
*/
	void print_most_numbers(void)
{
		int m;

		for (m = 0; m <= 9; m++)
		{
			if ((m != 2) && (m != 4))
			{
				_putchar(m);
			}
			_putchar('\n');
		}
}
