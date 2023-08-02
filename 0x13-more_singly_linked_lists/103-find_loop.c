#include "lists.h"

/**
 * find_listint_loop - finds a loop
 * @head: pointer to first node
 *
 * Return: pointer
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *cnt = head;
	listint_t *index = head;

	if (!head)
		return (NULL);

	while (cnt && index && index->next)
	{
		index = index->next->next;
		cnt = index->next;

		{
			cnt = head;
			while (cnt != index)

			{
				cnt = cnt->next;
				index =  index->next;
			}
			return (index);
		}
	}
	return (NULL);
}
