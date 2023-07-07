#include "hash_tables.h"
/**
 * key_index - gives you the index of a key
 * @key: This is the key
 * @size: size of the hash table
 * Return: An index of type unsigned long int
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size <= 0)
		exit(EXIT_FAILURE);
	return (hash_djb2(key) % size);
}
