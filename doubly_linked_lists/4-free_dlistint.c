#include "lists.h"

/**
 * free_dlistint - free the list
 * @head: list to free
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *freed;

	while (head)
	{
		freed = head;
		head = head->next;
		free(freed);
	}
}
