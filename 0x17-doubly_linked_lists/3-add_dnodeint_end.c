#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: Apointer to a pointer to a linked list
 * @n: Value of the node to be added
 * Return: Addresss of the new list or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *new_node;

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
		node = *head;
		while (node->next != NULL)
		{
			node = node->next;
		}
		node->next =new_node;
		new_node->prev = node;
		new_node->next = NULL;
	}
		return (*head);
}
