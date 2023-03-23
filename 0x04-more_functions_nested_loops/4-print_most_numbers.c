#include "main.h"

/**
 * print_most_numbers - function to print 0 t0 9 with an exception of 2 and 4
 * Return: null
*/
	void print_most_numbers(void)
{
		char c;

		for (c = '0'; c <= '9'; c++)
		{
			if ((c == '2' || c == '4'))
				_putchar(c);
		}
		_putchar('\n');
}
