#include "main.h"

/**
 * array_range - Function that creates an array of integera
 * @min: first value
 * @max: last value
 * Return: (0) (success)
 */

int *array_range(int min, int max)
{
	int *p;
	int s = (max - min) + 1;
	int i;

	p = malloc(s * sizeof(int));

	if (min > max)
	{
		return (NULL);
	}

	if (p == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (max >= min)
	{
		p[i] = min++;
		i++;
	}
	free(p);
	return (p);
}
