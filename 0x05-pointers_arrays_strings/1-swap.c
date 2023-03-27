#include "main.h"

/**
 * swap_int -Function that swaps the value of two integers
 * @a: first integer
 * @b: second integer
 * Return: null
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
