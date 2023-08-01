#include "lists.h"

/**
 * reverse_listint - reversion of list
 * @head: pointer to first node
 *
 * Return: pointer
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *rev = NULL;
	listint_t *node = NULL;

	while (*head)
	{
		node = (*head)->next;
		(*head)->next = rev;
		rev = *head;
		*head = node;
	}

	*head = rev;

	return (*head);
}

