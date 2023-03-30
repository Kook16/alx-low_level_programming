#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: address of the mode
 * Return: ....
 */


size_t print_list(const list_t *h)
{
	const list_t *temp = NULL;
	size_t count = 0;

	temp = h;
	while (temp != NULL)
	{
		if (temp->str != NULL)
		{
			printf("[%u] %s\n", temp->len, temp->str);
			count++;
		}
		else
		{
			printf("[0] (nil)\n");
			count++;
		}
		temp = temp->next;
	}
	return (count);

}
