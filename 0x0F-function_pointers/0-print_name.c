#include "function_pointers.h"

/**
 * print_name - Function Pointer that prints a name
 * @name: string
 * @f: Function pointer
 * Return: NULL
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;

	if (f == NULL)
		return;

	f(name);
}
