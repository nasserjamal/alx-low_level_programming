#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * listint_len - Calculates no of elements
 * @h: Address of a node
 * Return: (size_t) size of elements
 */
size_t listint_len(const listint_t *h)
{
	if (h == NULL)
		return (0);
	return (listint_len(h->next) + 1);
}
