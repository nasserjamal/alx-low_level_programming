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
	hash_node_t *dupCheck;
	int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	newNode = malloc(sizeof(hash_node_t));
	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = NULL;

	if (ht->array[index] != NULL)
	{
		dupCheck = ht->array[index];
		while (dupCheck != NULL)
		{
			if (strcmp(dupCheck->key, key) == 0)
			{
				free(newNode->key);
				free(newNode->value);
				free(newNode);
				free(dupCheck->value);
				dupCheck->value = strdup(value);
				return (1);
			}
			dupCheck = dupCheck->next;
		}

		newNode->next = ht->array[index];
	}
	ht->array[index] = newNode;

	return (1);
}
