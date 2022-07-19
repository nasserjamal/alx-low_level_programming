#include "lists.h"

/**
 * sum_listint - Calculates sum of values in node list.
 * @head: Head node
 * Return: the sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

