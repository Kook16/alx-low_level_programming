#include "lists.h"
listint_t *add(const int);
unsigned int count_node(const listint_t *h);
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
	unsigned int i = 0, count;

	count = count_node(*head);
	new = add(n);
	if (idx >= count)
		return (NULL);
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
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

/**
 * add - ...
 * @n: ...
 * Return: ...
 */
listint_t *add(const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	return (new);
}


/**
 * count - ...
 * @h: ...
 * Return: ...
 */
unsigned int count_node(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
