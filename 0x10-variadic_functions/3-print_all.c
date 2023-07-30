#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Functions that prints anything
 * @format: list of types of arguments passed
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *st, *sp = "";

	va_list lst;

		va_start(lst, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sp, va_arg(lst,int));
					break;
				case 'i':
					printf("%s%d", sp, va_arg(lst, int));
					break;
				case 'f':
					printf("%s%f", sp, va_arg(lst, double));
					break;
				case 's':
					st = va_arg(lst, char *);
					if (!st)
						st = "(nil)";
					printf("%s%s", sp, st);
					break;
				default:
					i++;
					continue;
			}
			sp = ", ";
			   i++;
		}
	}
	printf("\n");
	va_end(lst);
}
