#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: a pointer to a pointer to a listint_t list
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr = *head, *aux;

	while (ptr->next != NULL)
	{
		aux = ptr;
		free(aux);
		ptr = ptr->next;
	}
	*head = NULL;
}
