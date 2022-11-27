#include "hash_tables.h"

/**
 * hash_table_delete - Delete a hash table.
 * @ht: Pointer to a hash table.
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node = NULL, *next_node = NULL;
	unsigned long int i;

	if (!ht)
		return;

	if (ht->array)
	{
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			node = ht->array[i];
			while (node)
			{
				next_node = node->next;
				free(node->value);
				free(node->key);
				free(node);
				node = next_node;
			}
		}
	}
	free(ht->array);
	}
	free(ht);
}

