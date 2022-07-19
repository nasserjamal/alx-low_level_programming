#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint - adds a node at the beghining
 *
 * @head: Pointer to address of head
 * @n: Value of node
 * Return: (listint_t*) Returns address of new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new = malloc(sizeof(listint_t));
new->n = n;
new->next = *head;
*head = new;
return (*head);
}
