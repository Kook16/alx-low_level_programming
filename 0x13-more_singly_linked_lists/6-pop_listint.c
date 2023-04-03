#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: a pointer to a pointer to a listint_t list
 * Return: returns the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *node = *head, *temp = *head;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	n = node->n;
	node = node->next;
	*head = node;
	free(temp);
	temp = NULL;
	return (n);
}
