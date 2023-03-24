#include "main.h"

/**
 * more_numbers - function that prints 10 times the number
 * Return: null
 */

void more_numbers(void)
{
	int f = 0, g;

	while (f <= 1)
	{
		g = 0;
		while (g <= 14)
		{
			_putchar('0' + f);
			g++;
		}
		_putchar('\n');
		f++;
	}
	return;
}
