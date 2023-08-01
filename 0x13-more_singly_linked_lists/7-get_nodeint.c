#include "lists.h"

/**
 * get_nodeint_at_index - Returns nth node
 * @head: first node
 * @index: node to return
 *
 * Return: pointer to returned node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cnt = 0;
	listint_t *tmp = head;

	while (tmp && cnt < index)
	{
		tmp = tmp->next;
		cnt++;
	}

	return (tmp ? tmp : NULL);
}
