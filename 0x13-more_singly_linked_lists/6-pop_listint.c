#include "lists.h"
/**
 * pop_listint - Removes head node
 * @head: Head node
 * Return: Value of head node
 */
int pop_listint(listint_t **head)
{
listint_t *h;
if (*head == NULL)
	return (0);
h =  *head;
free(*head);
*head = h->next;
return (h->n);
}
