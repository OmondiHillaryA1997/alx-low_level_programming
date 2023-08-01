#include "lists.h"

/**
 * delete_nodeint_at_index - delete a specificnot at a specific index
 * @head: pointer to the first element
 * @index: index where node is deleted
 *
 * Return: -1 (Fail), 1 (Success)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *now = NULL;
	unsigned int cnt = 0;

	if (*head == NULL)
		return (-1);

	if (cnt == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (cnt < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		cnt++;
	}

	now = tmp->next;
	tmp->next = now->next;
	free(now);
	return (1);
}
