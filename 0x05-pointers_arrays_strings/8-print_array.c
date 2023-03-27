#include "main.h"

/**
 * print_array - Function that prints n elements of an array of intergers
 * @a: name of array
 * @n: the number of elements
 * Return: null
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < (n - 1); b++)
	{
		printf("%d,", a[b]);
	}
	if (b == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
