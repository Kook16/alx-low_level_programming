#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: a pointer to a pointer to a listint_t list
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr = *head, *aux = *head;

	if (*head == NULL)
		return;
	while (aux != NULL)
	{
		ptr = aux->next;
		free(aux);
		aux = ptr;
	}
		*head = NULL;
}
