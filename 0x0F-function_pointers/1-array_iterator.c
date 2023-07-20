#include "function_pointers.h"

/**
 * array_iterator - Fnction that executes a function given as a parameter
 * @array: array parameter
 * @size: number of members
 * @action: Function pointer
 *
 * Return: NULL
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int count;

	if (array == NULL)
		return;

	if (action == NULL)
		return;

	count = 0;
	while (count < size)
	{
		action(array[count]);
		count++;
	}
}
