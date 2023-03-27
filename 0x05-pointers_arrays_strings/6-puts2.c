#include "main.h"

/**
 * puts2 - Function that prints other character of a string starting
 * with the first character followe by a newline
 * @str: string
 * Return: null
 */

void puts2(char *str)
{
	int count = 0;
	int p = 0;
	char *z = str;
	int x;

	while (*z != '\0')
	{
		z++;
		count++;
	}
	p = count - 1;
	for (x = 0; x <= p; x++)
	{
		if (x % 2 == 0)
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}
