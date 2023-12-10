#include "main.h"

/**
 * set_bit - sets a bit to 1 at a given index
 * @n: pointer to number to change
 * @index: index
 *
 * Return: Success (1), Error (-1)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 42)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
