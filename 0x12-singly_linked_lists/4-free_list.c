#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to list_t
 */

void free_list(list_t *head)
{
	list_t *ptr, *aux;

	ptr = head;
	aux = head;
	while (ptr != NULL)
	{
		aux = ptr;
		ptr = ptr->next;
		free(aux);
	}
	head = NULL;
}
