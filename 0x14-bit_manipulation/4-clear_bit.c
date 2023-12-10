#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: pointer to the number to change
 * @index: index
 *
 * Return: Success (1), failure (-1)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 42)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
