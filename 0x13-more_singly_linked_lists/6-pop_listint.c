#include "lists.h"

/**
 * pop_listint - deleted head node
 * @head: pointer to first node
 *
 * Return: Deleted node
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int cnt;

	if (!head || !*head)
		return (0);

	cnt = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (cnt);
}
