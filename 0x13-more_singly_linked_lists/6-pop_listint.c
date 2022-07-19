#include "lists.h"
/**
 * pop_listint - Removes head node
 * @head: Head node
 * Return: Value of head node
 */
int pop_listint(listint_t **head)
{
listint_t *h;
int n = 0;

if (*head == NULL)
	return (0);
h =  *head;
n = h->n;
*head = h->next;
free(h);
return (n);
}
