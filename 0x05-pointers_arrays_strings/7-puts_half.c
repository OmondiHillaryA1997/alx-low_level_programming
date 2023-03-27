#include "main.h"

/**
 * puts_half - Function that prints half of string followed by a newline
 * @str: string
 * Return: null
 */

void puts_half(char *str)
{
	int x, y, count;

	count = 0;

	for (x = 0; str[x] != '\0'; x++)
		count++;

	y = (count / 2);

	if ((count % 2) == 1)
		y = ((count + 1) / 2);

	for (x = y; str[x] != '\0'; x++)
		_putchar(str[x]);
	_putchar('\n');
}
