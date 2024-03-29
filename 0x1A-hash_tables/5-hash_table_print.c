#include "hash_tables.h"


/**
 * hash_table_print - Print the hash table
 *
 * @ht: The hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	size_t i;
	int start = 1;

	if (ht == NULL)
		return;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (!start)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
			start = 0;
		}

	}


	printf("}\n");

}
