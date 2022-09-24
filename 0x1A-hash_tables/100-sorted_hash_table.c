#include "hash_tables.h"


/**
 * shash_table_create - Creates a hash table
 *
 * @size: Size of the table
 * Return: (shash_table_t*) The created table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i;
	shash_table_t *newTbl = malloc(sizeof(shash_table_t));

	if (newTbl == NULL)
		return (NULL);
	newTbl->size = size;
	newTbl->array = malloc(sizeof(shash_node_t *) * size);
	newTbl->shead = NULL;
	newTbl->stail = NULL;
	if (newTbl->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		newTbl->array[i] = NULL;

	return (newTbl);
}

/**
 * shash_table_set - Inserts a node to the hash table
 *
 * @ht: Pointer to the hash table
 * @key: The key of the new node
 * @value: Value of the new node
 * Return: int: 1 if success 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *newNode;
	shash_node_t *dupCheck;
	int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	newNode = malloc(sizeof(shash_node_t));
	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = NULL;
	newNode->snext = NULL;
	newNode->sprev = NULL;
	if (ht->array[index] != NULL)
	{
		/* A value exists, Collision management*/
		dupCheck = ht->array[index];
		while (dupCheck != NULL)
		{
			if (strcmp(dupCheck->key, key) == 0)
			{
				/* Duplicate key found */
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
	return (updateSList(newNode, ht, key));
}

/**
 * updateSList - Updates the sorted list
 *
 * @newNode: New node
 * @ht: hash table
 * @key: The key
 * Return: int
 */
int updateSList(shash_node_t *newNode, shash_table_t *ht, const char *key)
{
	shash_node_t *sNavigate;
	size_t counter = 0;

	if (ht->shead == NULL || ht->stail == NULL)
	{
		ht->shead = newNode;
		ht->stail = newNode;
	}
	else
	{
		sNavigate = ht->shead;
		while (sNavigate != NULL)
		{
			for (counter = 0; counter < strlen(key) || counter < strlen(sNavigate->key); counter++)
			{
				if (sNavigate->key[counter] > newNode->key[counter] || strlen(newNode->key) <= counter)
				{
					newNode->snext = sNavigate;
					newNode->sprev = sNavigate->sprev;
					if (newNode->sprev != NULL)
						newNode->sprev->snext = newNode;
					else
						ht->shead = newNode;
					sNavigate->sprev = newNode;
					return (1);
				}
				else if (sNavigate->key[counter] < newNode->key[counter] || strlen(sNavigate->key) <= counter)
					break;
			}
			if (sNavigate->snext == NULL)
			{
				sNavigate->snext = newNode;
				newNode->sprev = sNavigate;
				ht->stail = newNode;
				return (1);
			}
			else
				sNavigate = sNavigate->snext;
		}
	}
	return (1);
}

/**
 * shash_table_get - Retreive value of key
 *
 * @ht: Pointer to the hash table
 * @key: Key to look for
 * Return: The value obtained or null if none
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;

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

/**
 * shash_table_print - Print the hash table
 *
 * @ht: The hash table to be printed
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;
	int start = 1;

	if (ht == NULL)
		return;

	printf("{");
	current = ht->shead;
	while (current != NULL)
	{
		if (!start)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		current = current->snext;
		start = 0;
	}


	printf("}\n");

}

/**
 * shash_table_print_rev - Print the hash table
 *
 * @ht: The hash table to be printed
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;
	int start = 1;

	if (ht == NULL)
		return;

	printf("{");
	current = ht->stail;
	while (current != NULL)
	{
		if (!start)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		current = current->sprev;
		start = 0;
	}


	printf("}\n");

}


/**
 * shash_table_delete - Delete the entire table
 *
 * @ht: The hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current;
	shash_node_t *previous;

	if (ht == NULL)
		return;

	current = ht->shead;
	while (current != NULL)
	{
		previous = current;
		current = current->snext;
		free(previous->key);
		free(previous->value);
		free(previous);
	}

	free(ht->array);
	free(ht);
}
