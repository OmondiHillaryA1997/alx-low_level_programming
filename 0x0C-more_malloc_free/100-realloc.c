#include "main.h"

/**
 * *_realloc - Function that reallocates a memory of block
 * @ptr: pointer to be returned
 * @old_size: older size
 * @new_size: newer size
 * Return: (0) (success)
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_p;
	unsigned int s = 0;

	new_p = malloc(s * new_size);

	if (new_size > old_size)
	{
		return (NULL);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	free(ptr);
	return (new_p);
}

