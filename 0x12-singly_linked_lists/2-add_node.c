#include "lists.h"

/**
 * add_node - adds a new node at the beginninh of a list_t list
 * @head: pointer to pointer to list_t
 * @str: string
 * Return: A pointer to str
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (*head);

	temp->str = strdup(str);
	temp->next = *head;
	temp->len = strlen(str);
	*head = temp;
	return (*head);
}
