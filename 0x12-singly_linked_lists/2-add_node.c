#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node - Function that adds a new node at the beginning of a list
 * @head: pointer to first node
 * @str: insertion argument
 *
 * Return: integer
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *insert;
	unsigned int len;

	len = 0;
	while (str[len])
		len++;

	insert = malloc(sizeof(list_t));
	if (!insert)
		return (NULL);

	insert->str = strdup(str);

	insert->len = len;
	insert->next = (*head);
	(*head) = insert;

	return (*head);
}
