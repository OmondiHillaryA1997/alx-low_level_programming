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
	size_t p;

	p = 0;

	for (; h != NULL; p++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}

		else
		{
			printf("[%d]%s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (p);
}
