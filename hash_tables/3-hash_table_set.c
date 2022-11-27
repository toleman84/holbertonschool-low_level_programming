#include "hash_tables.h"

/**
 * hash_table_set - Set element in a hash table.
 * @ht: Pointer to the hash table.
 * @key: Key to add.
 * @value: Value associated with key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	char *value_ptr, *key_ptr;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	value_ptr = strdup(value);
	if (value_ptr == NULL)
		return (0);
	key_ptr = strdup(key);
	if (key_ptr == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_ptr;
			return (1);
		}
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(value_ptr);
		return (0);
	}
	new_node->key = key_ptr;
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = value_ptr;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}

