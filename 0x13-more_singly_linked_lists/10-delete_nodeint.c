#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a lsistint_t list
 * @head: ...
 * @index: ...
 * Return: ...
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev = *head, *curr = *head;
	unsigned int i = 1;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		if (prev == NULL)
		{
			return (-1);
		}
		*head = prev->next;
		free(curr);
		return (1);
	}
	while (i < index)
	{
		prev = prev->next;
		i++;
	}
	curr = prev->next;
	prev->next = curr->next;
	free(curr);
	return (1);
}
