#include "lists.h"

/**
 * addLastNode - adds the final node
 *
 * @head: Head node
 * @last: Currently last node
 * @n: Value of new last node
 * Return: (listint_t*)
 */
listint_t *addLastNode(listint_t **head, listint_t *last, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
if (*head == NULL)
	*head = new;
else
(last)->next = new;
return (new);
}

/**
 * iterate - Navigates to the last node
 * @head: Head node
 * @current: Current node
 * @n: Value of last node
 * Return: (listint_t*) addres of last node
 */
listint_t *iterate(listint_t **head, listint_t *current, const int n)
{
if (*head != NULL)
if (current->next != NULL)
return (iterate((head), (current)->next, n));
return (addLastNode(head, current, n));
}


/**
 * add_nodeint_end -adds nodes at the end
 * @head -head of the list
 * @n: value added
 * Return: (listint_t*) address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
return (iterate(head, *head, n));
}
