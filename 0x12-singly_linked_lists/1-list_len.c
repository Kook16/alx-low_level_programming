#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: linked list
 * Return: size_t
 */

size_t list_len(const list_t *h)
{
	const list_t *temp;
	size_t count = 0;

	temp = h;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
