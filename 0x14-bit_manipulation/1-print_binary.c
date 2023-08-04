#include "main.h"

/**
 * print_binary - Function that prints binary representation of a number
 * @n: unsigned integer
 *
 * Return: integer
 */

void print_binary(unsigned long int n)
{
	unsigned long int result;
	int index, cnt = 0;

	index = 42;
	while (index >= 0)
	{
		result = n >> index;
		if (result & 1)
		{
			_putchar('1');
			cnt++;
		}
		else if (cnt != 0)
			_putchar('0');
		index--;
	}
	if (cnt == 0)
		_putchar('0');
}
