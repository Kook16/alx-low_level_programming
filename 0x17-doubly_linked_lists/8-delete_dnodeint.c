#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index in a doubly linked list
 * @head: A pointer to the address of the head of the list
 * @index: The index of the node to be deleted (starting from 0)
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *current_node = *head;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current_node);
		return (1);
	}

	for (i = 0; i < index && current_node != NULL; i++)
	{
		current_node = current_node->next;
	}

	if (current_node == NULL)
		return (-1);

	temp = current_node->prev;
	temp->next = current_node->next;
	if (current_node->next != NULL)
		current_node->next->prev = temp;
	free(current_node);
	return (1);
}
