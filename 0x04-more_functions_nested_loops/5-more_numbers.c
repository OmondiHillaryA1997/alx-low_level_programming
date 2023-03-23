#include "main.h"

/**
 * more_numbers - function that prints 10 times the number
 * Return: null
 */

void more_numbers(void);
{
	int f, g;

	for (f = 1; f <= 10; f++)
	{
		for (g = 0; g <= 14; g++)
		{
			if (g >= 10)
				_putchar('1');
			_putchar(g % 10 + '0');
		}
		_putchar('\n');
	}
}
