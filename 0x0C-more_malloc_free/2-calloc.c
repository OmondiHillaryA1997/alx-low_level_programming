#include "main.h"

/**
 * *_calloc - Function that allocate memory for an array using malloc
 * @size: byte size
 * @nmemb: aray size
 * Return: (0) (success)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *str1;

	str1 = malloc(nmemb * size);

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}

	if (str1 == NULL)
	{
	return (NULL);
	}

	return (str1);
	free(str1);
}
