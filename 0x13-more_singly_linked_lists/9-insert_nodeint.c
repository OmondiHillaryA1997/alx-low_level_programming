#include "lists.h"

/**
 * insert_nodeint_at_index - node insertion in a specific point in the list
 * @head: pointer to first node
 * @idx: where new node is added
 * @n: data to insert
 *
 * Return: pointer
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int cnt;
	listint_t  *new_node;
	listint_t *tmp = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (cnt = 0; tmp && cnt < idx; cnt++)
	{
		if (cnt == idx - 1)
		{
			new_node->next = tmp->next;
			tmp->next = new_node;
			return (new_node);
		}
		else
			tmp = tmp->next;
	}

	return (NULL);
}

