#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
#include <string.h>

unsigned int _strlen(char *str);

/**
 * add_node_end - Function that adds a node at the end
 * @head: pointer to first node
 * @str: insertion
 *
 * Return: integer
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *insert;

	if (str == NULL)
		return (NULL);

	insert = malloc(sizeof(list_t));

	if (insert == NULL)
		return (NULL);

	insert->str = strdup(str);

	if (insert->str == NULL)
	{
		free(insert);
		return (NULL);
	}

	insert->len = _strlen(insert->str);
	insert->next = NULL;

	if (*head == NULL)
	{
		*head = insert;
		return (insert);
	}

	temp = *head;
	while (temp->next)
		temp = temp->next;

	temp->next = insert;

	return (insert);
}

/**
 * _strlen - gets length of string
 * @str: string
 *
 * Return: length string
 */

unsigned int _strlen(char *str)
{
	unsigned int index;

	index = 0;

	while (str[index])
	{
		index++;
	}
	return (index);
}
