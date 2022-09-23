#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "hetairas", "hetawhat");
    hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "mentioner", "mentionaerer");
    hash_table_set(ht, "stylist", "Verystylist");
    hash_table_set(ht, "subgenera", "Subgenera");

    printf("%s\n", ht->array[key_index((const unsigned char *)"stylist", ht->size)]->value);
    printf("%s\n", ht->array[key_index((const unsigned char *)"subgenera", ht->size)]->next->value);
    return (EXIT_SUCCESS);
}
