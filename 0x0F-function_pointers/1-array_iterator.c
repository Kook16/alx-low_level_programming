#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function givens as a parameter on each element of an array
 * @array: Address of the array
 * @size: Size of the array
 * @action: A pointer to a function
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t i;

	if (array != NULL && size != 0)
		for (i = 0; i < size; i++)
			action(array[i]);
}
