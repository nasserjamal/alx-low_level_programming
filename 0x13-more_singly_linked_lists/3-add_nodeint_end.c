#include "lists.h"

/**
 * add_nodeint_end -adds nodes at the end
 * @head -head of the list
 * @n: value added
 * Return: (listint_t*) address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
if ((*head)->next != NULL)
return (add_nodeint_end(&((*head)->next), n));
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;
(*head)->next = new;
return (new);
}
