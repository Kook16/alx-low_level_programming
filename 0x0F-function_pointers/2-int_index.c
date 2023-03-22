#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: Address of the array
 * @size: Size of the array
 * @cmp: A pointer to a function
 * Return: An integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
