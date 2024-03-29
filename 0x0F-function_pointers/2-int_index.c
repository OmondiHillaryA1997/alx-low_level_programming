#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer
 * @array: string parameter
 * @size: size parameter
 * @cmp: Funtion pointer
 * Return: NULL
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
		return (-1);

	if (cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{

		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
