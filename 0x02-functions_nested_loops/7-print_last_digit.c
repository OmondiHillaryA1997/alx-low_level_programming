#include "main.h"

/**
 * print_last_digit - func is to check if c is a letter, lowercase or uppercase
 * @n: is the argument that will be used
 * Return: value of the last digit
 */

	int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;
	_putchar (last_digit + '0');
return (last_digit);
}
