#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: ....
 * Return: ...
 */


size_t print_listint(const listint_t *h)
{
	int count = 0;
	const listint_t *node = h;

	if (node == NULL)
		return (count);
	while (node != NULL)
	{
		printf("%d\n", node->n);
		count++;
		node = node->next;
	}
	return (count);
}
