#include "lists.h"

/**
 * print_listint - printing of elements in the list
 * @h: linked list to print
 *
 * Return: integer
 */

size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		node++;
		h = h->next;
	}

	return (node);
}
