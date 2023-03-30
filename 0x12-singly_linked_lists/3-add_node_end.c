#include "lists.h"

/**
 * add_node_end - adds a node at the end of a list_t
 * @head: pointer to a pointer to list_t
 * @str: string
 * Return: pointer to list_t
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t)), *ptr;

	if (temp != NULL)
	{
		temp->str = strdup(str);
		temp->len = strlen(str);
		temp->next = NULL;

		ptr = *head;
		if (ptr == NULL)
		{
			*head = temp;
		}
		else
		{
			while (ptr->next != NULL)
			{
				ptr = ptr->next;
			}
			ptr->next = temp;
		}
	}
	return (*head);

}
