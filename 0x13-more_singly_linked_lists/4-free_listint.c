#include "lists.h"
/**
 * free_listint - frees all nodes
 *
 * @head: address of head
 */
void free_listint(listint_t *head){
    if(head != NULL){
    free_listint(head->next);
    free(head);
    }
}
