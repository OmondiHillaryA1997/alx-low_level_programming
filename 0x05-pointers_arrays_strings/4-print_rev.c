#include "main.h"

/**
 * print_rev - Function that prints a string in reverse followedby a newline
 * @s: string
 * Return: null
 */

void print_rev(char *s)
{
	while (*s == '\0')
	{

		_putchar(*s--);
	}
	_putchar('\n');
}
