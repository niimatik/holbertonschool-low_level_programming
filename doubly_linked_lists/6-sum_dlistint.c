#include "lists.h"

/**
 * sum_dlistint - return the sum of all the data of a linked list
 * @head: the list of add the data of
 *
 * Return: the sum of the data
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *added = head;
	int sum = 0;

	if (head)
	{
		while (added != NULL)
		{
			sum += added->n;
			added = added->next;
		}
	}
	return (sum);
}
