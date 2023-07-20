#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - Function that prints numbers
 * @separator: first parameter
 * @n: second parameter
 *
 * Return: numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, n);

	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(num, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);

		i++;
	}
	printf("\n");

	va_end(num);
}
