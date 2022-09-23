#include "hash_tables.h"


/**
 * hash_table_create - Creates a hash table
 *
 * @size: The size of the hash tables
 * Return: hash_table_t* , Pointer to the created  hashtable
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newTbl = malloc(sizeof(hash_table_t));
	
	newTbl->size = size;
	newTbl->array = malloc(sizeof(hash_node_t *) * size);
	if (newTbl->array == NULL)
		return (NULL);
	return (newTbl);
}
