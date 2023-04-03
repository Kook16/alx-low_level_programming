#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to listint_t list
 */

void free_listint(listint_t *head)
{
	listint_t *ptr, *aux;

	ptr = head;
	while (aux != NULL)
	{
		ptr = aux->next;
		free(aux);
		aux = ptr;
	}
}
