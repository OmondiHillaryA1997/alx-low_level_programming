#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>


/**
 * print_list - Function that prints all elements in list_t
 * @h: header pointer
 *
 * Return: integer
 */

size_t print_list(const list_t *h)
{
	int p;

	p = 0;

	for ( ; h != NULL; h = h->next, p++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}

		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
	}
	return (p);
}
