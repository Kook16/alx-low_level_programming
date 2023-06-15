#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a doubly linked list
 * @h: A pointer to the address of the head of the list
 * @idx: The index where the new node should be added (starting from 0)
 * @n: The data value to be stored in the new node
 *
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *node = *h;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; i < idx - 1 && node != NULL; i++)
		node = node->next;

	if (node == NULL)
		return (NULL);

	if (node->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = node->next;
	new_node->prev = node;
	node->next->prev = new_node;
	node->next = new_node;

	return (new_node);
}
