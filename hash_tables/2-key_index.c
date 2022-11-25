#include "hash_tables.h"

/**
 * key_index - Index of key/value
 * @key: Key to get the index of.
 * @size: Size of the array.
 *
 * Return: Index of the key.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

