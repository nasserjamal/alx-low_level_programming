#include <stdlib.h>
#include <stdio.h>
#include "lists.h"


/**
 * print_listint - Prints all ellements in a linked list
 *
 * @h: Head of a linked list
 * Return: (size_t) no of nodes in a list
 */
size_t print_listint(const listint_t *h)
{
	if (h == NULL)
		return (0);
	printf("%d\n", h->n);
	return (print_listint(h->next) + 1);
}
