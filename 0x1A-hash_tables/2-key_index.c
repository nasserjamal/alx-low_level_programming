#include "hash_tables.h"

/**
 * key_index - Prokduces indices of keys
 *
 * @key: The key of the hash node
 * @size: Size of hashTable
 * Return: unsigned long int The index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
