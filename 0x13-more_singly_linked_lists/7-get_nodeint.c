#include "lists.h"

/**
 * get_nodeint_at_index - ...
 * @head: ...
 * @index: ...
 * Return: ...
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node = head;

	if (head == NULL)
	{
		return (NULL);
	}
	while (node != NULL)
	{
		if (i == index)
		{
			return (node);
		}
		i++;
		node = node->next;
	}
	return (NULL);
}
