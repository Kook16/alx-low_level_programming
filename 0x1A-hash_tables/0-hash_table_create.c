#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: size of the hash table
 * Return: Return a pointer to the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ptr_2_ht;
	unsigned int i = 0;

	if (size <= 0)
		return (NULL);
	ptr_2_ht = calloc(size, sizeof(hash_table_t));
	if (ptr_2_ht == NULL)
		return (NULL);
	for (i = 0; i < size - 1; i++)
		(ptr_2_ht + 1)->array = NULL;
	return (ptr_2_ht);
}