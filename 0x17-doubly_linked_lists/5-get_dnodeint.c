#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: A pointer to the linked list
 * @index: The index of the node we need to return
 * Return: returns the nth node of a dlistint_t linked list.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	node = head;
	while (i != index && node != NULL)
	{
		node = node->next;
		i++;
	}
	if (i == index)
		return (node);
	return (NULL);
}
		
