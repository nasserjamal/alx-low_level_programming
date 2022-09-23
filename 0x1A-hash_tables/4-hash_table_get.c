#include "hash_tables.h"


/**
 * hash_table_get - Retreive value of key
 *
 * @ht: Pointer to the hash table
 * @key: Key to look for
 * Return: The value obtained or null if none
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	node = ht->array[key_index((const unsigned char *)key, ht->size)];
	if (node == NULL)
		return (NULL);

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
