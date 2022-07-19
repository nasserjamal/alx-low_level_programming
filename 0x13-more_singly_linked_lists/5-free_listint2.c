#include "lists.h"

/**
 * free_listint2 - Frees nodes
 *
 * @head: Address of head node
 */
void free_listint2(listint_t **head)
{
if (head != NULL)
if (*head != NULL)
{
if ((*head)->next != NULL)
free_listint2(&((*head)->next));
free(*head);
}
}
