#include "main.h"

/**
 * *malloc_checked - Function that allocates memory using malloc
 * @b: integer input
 * Return: (0) (success)
 */

void *malloc_checked(unsigned int b)
{
	void *pt;

	pt = malloc(b);

			if (pt == NULL)

			exit(98);

			return (pt);
}
