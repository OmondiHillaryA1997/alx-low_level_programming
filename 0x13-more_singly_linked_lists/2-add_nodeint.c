#include "lists.h"

/**
 * add_nodeint - insertion of a new node in the list
 * @head: point to the first node
 * @n: new node
 *
 * Return: new node pointer NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
