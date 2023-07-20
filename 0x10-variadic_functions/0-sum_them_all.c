#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  Function that sums all its parameters
 * @n: first parameter
 * Return: integer
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	unsigned int count;
	unsigned int arg_sum;

	va_start(sum, n);

	if (n == 0)
		return (0);

	for (count = 0; count < n; count++)
	{
		arg_sum = arg_sum + va_arg(sum, int);
	}

	va_end(sum);

	return (arg_sum);
}
