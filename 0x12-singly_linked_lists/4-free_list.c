#include <stdio.h>
#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Function that frees lists
 * @head: pointer to the first node
 *
 * Return: null
 */

void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);

		if (head->str)
			free(head->str);
		free(head);
	}
}
