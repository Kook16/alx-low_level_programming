#include "lists.h"

/**
 * print_dlistint - prints all elements of a linked list
 * @h: A pointer to the dlistint
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t no_of_nodes = 0;

	if (h == NULL)
		return (0);
	while (node != NULL)
	{
		printf("%d\n", node->n);
		no_of_nodes++;
		node = node->next;
	}
	return (no_of_nodes);
}
