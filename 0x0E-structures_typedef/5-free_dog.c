#include "dog.h"

/**
 * free_dog -Function that free structures
 * @d: pointer to struct
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free((*d).name);
		free((*d).owner);
		free(d);

	}
}
