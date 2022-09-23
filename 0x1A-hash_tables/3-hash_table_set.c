#include "hash_tables.h"

/**
 * hash_table_set - Inserts a node to the hash table
 *
 * @ht: Pointer to the hashtable
 * @key: Key of the node
 * @value: Value of the node
 * Return: 1 if success and 0 if not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode;
	int index;

	if (ht == NULL || key == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	newNode = malloc(sizeof(hash_node_t));
	newNode->key = (char *)key;
	newNode->value = (char *)value;
	newNode->next = NULL;

	if (ht->array[index] != NULL)
		newNode->next = ht->array[index];
	ht->array[index] = newNode;

	return (1);
}
