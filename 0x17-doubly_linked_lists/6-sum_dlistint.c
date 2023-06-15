#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data
 * @head: A pointer to the list
 * Return: Sum of the data of the linked list
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node;
	int sum = 0;

	if (head == NULL)
		return (0);
	node = head;
	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
