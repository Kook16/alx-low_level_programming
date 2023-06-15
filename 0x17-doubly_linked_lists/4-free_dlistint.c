#include "lists.h"

/**
 * free_dlistint - frees dlistint_t list
 * @head: Adddress of the linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp1, *temp2;

	if (head == NULL)
		return;
	temp1 = head;
	while (temp1->next != NULL)
	{
		temp2 = temp1;
		temp1 = temp1->next;
		free(temp2);
	}
	free(temp1);
	temp1 = NULL;
	temp2 = NULL;
}
