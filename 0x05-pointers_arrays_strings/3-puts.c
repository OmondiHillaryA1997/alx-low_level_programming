#include "main.h"

/**
 * _puts - Function that prints a string followed by newline
 * @str: string
 * Return: null
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
	        _putchar(*str++);
	}
	_putchar('\n');
	return;
}
