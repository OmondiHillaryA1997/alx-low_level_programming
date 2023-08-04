#include "main.h"

/**
 * get_bit - Returns the value of a bit at an index
 * @n: pointer to number to change
 * @index: index of bit
 *
 * Return: (1) Success, Error (-1)
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int b_v;

	if (index > 63)
		return (-1);

	b_v = (n >> index) & 1;

	return (b_v);
}
