#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to a pointer to a listint_t list
 * Return: A pointer to a listint_t list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *curr = *head;

	if (*head == NULL)
	{
		return (NULL);
	}
	while (curr != NULL)
	{
		*head = curr->next;
		curr->next = prev;
		prev = curr;
		curr = *head;
	}
	*head = prev;
	return (*head);
}
