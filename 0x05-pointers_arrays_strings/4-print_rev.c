#include "main.h"

/**
 * print_rev - Function that prints a string in reverse followedby a newline
 * @s: string
 * Return: null
 */

void print_rev(char *s)
{
	int count = 0;
	int p;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	s--;
	for (p = count; p > 0; p--)
	{

		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
