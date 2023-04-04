#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: ...
 * @idx: ...
 * @n: ...
 * Return: ...
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = *head, *new;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}
	while (i < idx - 1)
	{
		if (node == NULL)
			return (NULL);
		node = node->next;
		i++;
	}
	new->next = node->next;
	node->next = new;
	return (*head);
}
