#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Function that prints the sum of two diagonals of
 * a square matrix
 * @a: first input
 * @size: second input
 * Return: Retuns sum
 */

void print_diagsums(int *a, int size)
{
	int c;
	int d;

	int Sum = 0;
	int Sum_2 = 0;

	for (c = 0; c <= (size * size); c = c + size + 1)
		Sum = Sum + a[c];

	for (d = size - 1; d <= (size * size) - size; d = d + size - 1)
		Sum_2 = Sum_2 + a[d];
	printf("%d, %d\n", Sum, Sum_2);
}
