#include "main.h"

/**
 * *_calloc - Function that allocate memory for an array using malloc
 * @size: byte size
 * @nmemb: aray size
 * Return: (0) (success)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str1;

	str1 = malloc(nmemb * sizeof(size));

	if (size == 0 || nmemb == 0)

	return (NULL);

	if (str1 == NULL)

		return (NULL);

	free(str1);

	return (str1);
}
