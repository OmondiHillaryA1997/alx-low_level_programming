#include "main.h"

/**
 * print_numbers - function to print numbers from 0 to 9 followed by new line
 * Return: 0 to 9
 */

void print_numbers(void)
{
	int c = 0;

	do {
		_putchar(c + 48);
		c++;
	} while (c >= 0 && <= 9);

	_putchar('\n');
}
