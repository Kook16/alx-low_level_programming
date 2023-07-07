#include "hash_tables.h"
#define IND unsigned long int
/**
 * hash_table_print - ....
 * @ht: ...
 */

void hash_table_print(const hash_table_t *ht)
{
	IND i;
	hash_node_t *node;
	char *seperator;

	if (ht == NULL)
		return;
	printf("{");

	i = 0;
	seperator = "";
	while (i < size)
	{
		while (node)
		{
			printf("%s'%s': '%s'", seperator, node->key, node->value);
			seperator = ", ";
			node = node->next;
		}
		i++;
	}
	printf("}\n");
}
