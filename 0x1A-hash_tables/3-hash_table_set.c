#include "hash_tables.h"
hash_node_t *create_node(const char *key, const char *value);

/**
 * hash_table_set - adds an element to the hash table
 * @ht: A pointer to a hash table
 * @key: A string representing the key
 * @value: A string representing the value
 * Return: 1 for success and 0 for failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *ptr_node, *ptr_t;
	unsigned long int idx;
	const unsigned char *str_key = (const unsigned char *)key;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);
	idx = key_index(str_key, ht->size);
	ptr_t = ht->array[idx];
	if (ptr_t)
	{
		if (strcmp(ptr_t->key, key) == 0)
		{
			free(ptr_t->value);
			ptr_t->value = strdup(value);
			return (1);
		}
		ptr_t = ptr_t->next;
	}
	ptr_node = create_node(key, value);
	if (ptr_node == NULL)
		return (0);
	ptr_node->next = ht->array[idx];
	ht->array[idx] = ptr_node;
	return (1);
}

/**
 * create_node - creates the items of the hash table
 * @key: String representing key
 * @value: string representing value
 * Return: A pointer to a new hash node item
 */

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(node));

	if (node == NULL)
		return (NULL);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->value);
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}
