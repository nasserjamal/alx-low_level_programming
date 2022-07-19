#include "lists.h"
/**
 * pop_listint - Removes head node
 * @head: Head node
 * Return: Value of head node
 */
int pop_listint(listint_t **head)
{
listint_t *h =  *head;

*head = h->next;
return (h->n);
}
