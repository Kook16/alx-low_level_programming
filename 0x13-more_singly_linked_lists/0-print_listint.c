#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: ....
 * Return: ...
 */


size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (head == NULL)
		return (count);
	while (head != NULL)
	{
		printf("%d\n", node->n);
		count++;
		node = node->next;
	}
	return (count);
}
