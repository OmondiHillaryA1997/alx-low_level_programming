#include <stdlib.h>
#include "main.h"

/**
 * _memset - Function that fills memory with constat byte
 * @mem: memory area to be filled
 * @c: char to fill
 * @n: times to fill
 *
 * Return: pointer
 */

char *_memset(char *mem, char c, unsigned int n)
{
	unsigned int index = 0;

	for (; index < n; index++)
	{
		mem[index] = c;
	}
	return (mem);
}

/**
 * _calloc - Function that alllocates memory
 * @nmemb: elements number
 * @size: element size
 *
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pt;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pt = malloc(size * nmemb);

	if (pt == NULL)
		return (NULL);

	_memset(pt, 0, nmemb * size);

	return (pt);
}
