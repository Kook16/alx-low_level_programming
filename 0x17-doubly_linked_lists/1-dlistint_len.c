#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t
 * @h: A pointer to the head of the linked list
 * Return: Number of elemts in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t no_of_nodes = 0;

	if (h == NULL)
		return (0);
	node = h;
	while (node != NULL)
	{
		no_of_nodes++;
		node = node->next;
	}
	return (no_of_nodes);
}
