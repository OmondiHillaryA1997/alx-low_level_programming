#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>


/**
 * list_len - Function that prints number of elements in list_t
 * @h: header pointer
 *
 * Return: integer
 */

size_t list_len(const list_t *h)
{
	int p;

	p = 0;

	for ( ; h != NULL; )
	{
		h = h->next;
		p++;
	}
	return (p);
}
