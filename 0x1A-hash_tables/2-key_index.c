#include "hash_tables.h"
/**
 * key_index - Compute the index of a key in the hash table array.
 * @key: The key (string) to be hashed.
 * @size: The size of the array in the hash table.
 * Return: The index where the key should be stored.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
