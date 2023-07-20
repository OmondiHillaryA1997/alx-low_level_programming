#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - Function that prints strings
 * @separator: first parameter
 * @n: second parameter
 *
 * Return: strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list pstrings;
	unsigned int count;
	char *string;

	va_start(pstrings, n);

	count = 0;
	while (count < n)
	{
		string = va_arg(pstrings, char*);

		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);

		if (count != (n - 1) && separator != NULL)
			printf("%s", separator);

		count++;
	}
	printf("\n");

	va_end(pstrings);
}
