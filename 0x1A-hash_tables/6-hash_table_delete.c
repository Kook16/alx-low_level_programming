#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: ...
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr_c = NULL, *ptr_t = NULL;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		ptr_c = ht->array[i];
		while (ptr_c)
		{
			ptr_t = ptr_c;
			ptr_c = ptr_c->next;
			free(ptr_t->value);
			free(ptr_t->key);
			free(ptr_t);
		}
	}
	ptr_t = NULL;
	ptr_c = NULL
	free(ht->array);
	free(ht);
	ht = NULL
}
