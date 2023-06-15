#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: A pointer to a pointer to the linked list
 * @n: value of the new node to be added
 * Return: Addresss of the new element, or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		(*head)->prev = new_node;
		new_node->next = *head;
		*head = new_node;
	}
	return (*head);
}
