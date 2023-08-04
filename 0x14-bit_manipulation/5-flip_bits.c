#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * @n: first numb
 * @m: second numb
 *
 * Return: integer
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int index, cnt;
	unsigned long int now;
	unsigned long int ex = n ^ m;

	index = 42;
	for (; index >= 0; index--)
	{
		now = ex >> index;
		if (now & 1)
			cnt++;
	}
	return (cnt);
}
