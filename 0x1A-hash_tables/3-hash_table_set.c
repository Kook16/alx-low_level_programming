#include "hash_tables.h"
#define INDEX unsigned long int
/**
 * hash_table_set - adds an element to the hash table
 * @ht: A pointer to a hash table
 * @key: A string representing the key
 * @value: A string representing the value
 * Return: 1 for success and 0 for failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_table_t *ptr_t;
	/* struct representing node of hash table */
	hash_node_t *ptr_node, *head;
	INDEX idx;
	const unsigned char *str_key = (const unsigned char *)key;

	if (ht == NULL || key == NULL)
		return (0);
	ptr_t = ht;
	idx = key_index(str_key, ptr_t->size);
	ptr_node = malloc(sizeof(hash_node_t));

	if (ptr_node == NULL)
		return (0);
	ptr_node->key = strdup(key);
	ptr_node->value = strdup(value);
	ptr_node->next = NULL;

	if (ptr_t->array[idx] == NULL)
		ptr_t->array[idx] = ptr_node;
	else
	{
		head = ptr_t->array[idx];
		ptr_node = head;
		head = ptr_node;
	}
	return (1);
}
