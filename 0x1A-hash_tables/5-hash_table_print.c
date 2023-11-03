#include "hash_tables.h"

/**
 * hash_table_print - prints the keys and values of the hash table
 * @ht: pointer to the hash table to print
 * Return: no return
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	char *sp;

	if (ht == NULL)
		return;

	printf("{");
	sp = "";

	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			printf("%s'%s': '%s'", sp, node->key, node->value);
			sp = ", ";
			node = node->next;
		}
	}
	printf("}\n");
}
