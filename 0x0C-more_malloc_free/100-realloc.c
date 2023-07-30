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
	char *new_p;
	char *old_p;

	unsigned int index = 0;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	new_p = malloc(new_size);
	if (!new_p)
		return (NULL);

	old_p = ptr;

	if (new_size < old_size)
	{
		for (; index < new_size; index++)
			new_p[index] = old_p[index];
	}

	free(ptr);
	return (new_p);
}
