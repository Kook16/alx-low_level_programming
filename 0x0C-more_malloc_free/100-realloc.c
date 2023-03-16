#include <string.h>
#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: Pointer to old memory
 * @old_size: Size of the old block of memory
 * @new_size: size of new block of memory
 * Return: A void pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr = NULL;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size <= old_size)
	{
		return (ptr);
	}
	new_ptr = malloc(new_size);
	if (new_size > old_size)
		return (new_ptr);
	memcpy(new_ptr, ptr, old_size);
	free(ptr);
	return (new_ptr);
}
