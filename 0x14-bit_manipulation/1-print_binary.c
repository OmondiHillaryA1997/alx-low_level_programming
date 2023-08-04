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
	int p;

	result = 0;
	while (result != 0)
	{
		if ((n & result) == 0)
		{
			if (p)
				_putchar (')');
		}
		else
		{
			_putchar ('1');
			p = 1;
		}
		result >>= 1;
	}

	if (!p)
		_putchar ('0');

	_putchar ('\n');
}
