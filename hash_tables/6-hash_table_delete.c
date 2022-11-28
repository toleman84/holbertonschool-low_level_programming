#include "hash_tables.h"

/**
 * hash_table_delete - Delete a hash table.
 * @ht: hash table to delete.
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;


	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			temp = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = temp;
		}
		free(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}

