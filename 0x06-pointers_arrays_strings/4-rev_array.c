#include "main.h"

/**
 * reverse_array - Function that reverses the content of an array of integers
 * @a: array
 * @n: number of elements of the array
 * Return: array
 */

void reverse_array(int *a, int n)
{
	int b;
	int c;

	for (b = 0; (b < n / 2); b++)
	{
		c = a[b];
		a[b] = a[n - b - 1];
		a[n - b - 1] = c;
	}
}
