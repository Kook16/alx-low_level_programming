#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: ....
 * Return: ...
 */


size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			count++;
		}
	}
	return (count);
}
