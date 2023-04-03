#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: ...
 * Return: ...
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *node = h;

	while (node != NULL)
	{
		count++;
		node = node->next;
	}
	return (count);
}
