#include "hash_tables.h"


/**
 * hash_table_create - Creates a hash table
 *
 * @size: The size of the hash tables
 * Return: hash_table_t* , Pointer to the created  hashtable
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *newTbl = malloc(sizeof(hash_table_t));

	if (newTbl == NULL)
		return (NULL);
	newTbl->size = size;
	newTbl->array = malloc(sizeof(hash_node_t *) * size);
	if (newTbl->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		newTbl->array[i] = NULL;

	return (newTbl);
}
