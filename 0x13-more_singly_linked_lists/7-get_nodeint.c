#include "lists.h"

/**
 * get_nodeint_at_index - Finds a node
 * @head: The head node
 * @index: The index being searched for
 *
 * Return: Address to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
