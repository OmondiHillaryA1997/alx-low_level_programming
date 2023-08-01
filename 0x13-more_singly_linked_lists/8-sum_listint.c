#include "lists.h"

/**
 * sum_listint - sums all the data n of a list
 * @head: first node
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		add += tmp->n;
		tmp = tmp->next;
	}

	return (add);
}
