#include "main.h"

/**
 * print_numbers - function to print numbers from 0 to 9 followed by new line
 * Return: 0 to 9
 */

void print_numbers(void)
{
	char d = 0;

	for (d = '0'; d <= '9'; d++)
	{
		_putchar(d);
	}
	_putchar('\n');
}
