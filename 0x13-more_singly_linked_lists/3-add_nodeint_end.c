#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to pointer to a listint_t list
 * @n: ...
 * Return: A pointer to listint_t
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end = malloc(sizeof(listint_t));
	listint_t *node = *head;

	if (end == NULL)
	{
		return (NULL);
	}
	end->n = n;
	end->next = NULL;
	if (*head == NULL)
	{
		*head = end;
		return (end);
	}
	while (node->next != NULL)
	{
		node = node->next;
	}
	node->next = end;
	return (*head);
}
