#include "hash_tables.h"


/**
 * hash_table_delete - Delete the entire table
 *
 * @ht: The hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current;
	hash_node_t *previous;
	size_t i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			previous = current;
			current = current->next;
			free(previous->key);
			free(previous->value);
			free(previous);
		}

	}
	free(ht->array);
	free(ht);
}
