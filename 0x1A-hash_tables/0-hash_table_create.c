#include "hash_tables.h"
/**
 * hash_table_create - Creates a new hash table.
 * @size: The size of the array.
 * Return: A pointer to the newly created hash table, or NULL if error occurs.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	hash_node_t **array;
	unsigned long int i;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);

	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = NULL;

	hash_table->array = array;
	hash_table->size = size;

	return (hash_table);
}
