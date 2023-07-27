#include "lists.h"

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
			printf("[0] (nil)\n");

		else
			printf("[%u]%s\n", h->len, h->str);
		h = h->next;
	}
	return (p);
}
