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
    hash_node_t *hd;

    ht = hash_table_create(1024);
    hash_table_set(ht, "hetairas", "hetawhat");
    hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "mentioner", "mentionaerer");
    hash_table_set(ht, "stylist", "Verystylist");
    hash_table_set(ht, "subgenera", "Subgenera");
    hash_table_set(ht, "stylist", "Seems not very stylist");

    hd = ht->array[key_index((const unsigned char *)"stylist", ht->size)];
    while (hd != NULL)
    {
        printf("%s : %s\n",hd->key, hd->value);    
        hd = hd->next;
    }
    
    printf("%s\n", ht->array[key_index((const unsigned char *)"stylist", ht->size)]->value);
    printf("%s\n", ht->array[key_index((const unsigned char *)"subgenera", ht->size)]->next->value);
    return (EXIT_SUCCESS);
}
